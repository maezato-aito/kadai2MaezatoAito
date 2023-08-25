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
	int numBullets;// (”­Ë‚·‚é’e‚Ì”)

	float baseAngle;// (”­Ë‚·‚éÅ‰‚Ì’e‚ÌŒü‚«)

	float angleDiff;// (’e“¯m‚ÌŠp“x·)

private:

	Bullet* bullet;
};

