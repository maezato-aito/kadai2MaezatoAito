#include "NwaySpawner.h"

NwaySpawner::NwaySpawner()
{
	bullet = new Bullet();
}
NwaySpawner::~NwaySpawner()
{
	delete bullet;
}
void NwaySpawner::Shoot()
{
	speed = 3;//’e‚Ì‘¬“x
	angle = 0;//’e‚ÌŠp“x
	numBullets = 1;//”­ŽË‚·‚é’e‚Ì”

	bullet->Update();
	bullet->Draw();
}
