#pragma once
#include"BulletsSpawner.h"

class NwaySpawner:BulletsSpaWner
{
public:
	void Shoot() override;

protected:
	int numBullets;// (”­Ë‚·‚é’e‚Ì”)

	float baseAngle;// (”­Ë‚·‚éÅ‰‚Ì’e‚ÌŒü‚«)

	float angleDiff;// (’e“¯m‚ÌŠp“x·)

private:

};

