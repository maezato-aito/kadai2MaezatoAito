#pragma once
#include"BulletsSpawner.h"

class NwaySpawner:BulletsSpaWner
{
public:
	void Shoot() override;

protected:
	int numBullets;// (���˂���e�̐�)

	float baseAngle;// (���˂���ŏ��̒e�̌���)

	float angleDiff;// (�e���m�̊p�x��)

private:

};

