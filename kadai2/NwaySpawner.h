#pragma once
#include"BulletsSpawner.h"

class NwaySpawner:BulletsSpawner
{
public:
	NwaySpawner();
	~NwaySpawner();
	void Shoot() override;

protected:
	int numBullets;// (���˂���e�̐�)

	float baseAngle;// (���˂���ŏ��̒e�̌���)

	float angleDiff;// (�e���m�̊p�x��)

private:

	Bullet* bullet;
};

