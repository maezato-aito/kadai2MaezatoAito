#pragma once
#include"Bullet.h"
class BulletsSpawner
{
public:
	 virtual void Shoot() = 0 ;

protected:

	int speed;			//(�e�𐶐����鑬�x)
	float angle;		// (�p�x)
	int acceleration;	//(���x�̕ω���)
	float angulVelocity;//(�p�x�̕ω���)

private:

	

};