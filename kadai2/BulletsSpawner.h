#pragma once
#include"Bullet.h"
class GameMain;
class BulletsSpawner
{
public:
	 virtual void Shoot(GameMain* gm, int x, int y) = 0 ;

protected:

	int speed;			//(’e‚ğ¶¬‚·‚é‘¬“x)
	float angle;		// (Šp“x)
	int acceleration;	//(‘¬“x‚Ì•Ï‰»—Ê)
	float angulVelocity;//(Šp“x‚Ì•Ï‰»—Ê)

private:

	

};