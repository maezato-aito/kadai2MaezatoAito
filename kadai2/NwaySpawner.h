#pragma once
#include"BulletsSpawner.h"
#include"Bullet.h"

class NwaySpawner:BulletsSpawner
{
public:
	NwaySpawner();
	~NwaySpawner();
	void Shoot(GameMain* gm, int x, int y) override;

protected:
	int numBullets;// (���˂���e�̐�)

	float baseAngle;// (���˂���ŏ��̒e�̌���)

	float angleDiff;// (�e���m�̊p�x��)

private:

	Bullet* bullet;
};

