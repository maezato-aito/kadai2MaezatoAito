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
	speed = 3;//�e�̑��x
	angle = 0;//�e�̊p�x
	numBullets = 1;//���˂���e�̐�

	bullet->Update();
	bullet->Draw();
}
