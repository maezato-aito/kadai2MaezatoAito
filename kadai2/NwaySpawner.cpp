#include "NwaySpawner.h"
#include "GameMain.h"
NwaySpawner::NwaySpawner()
{
}
NwaySpawner::~NwaySpawner()
{
	delete bullet;
}
void NwaySpawner::Shoot(GameMain* gm,int x,int y)
{
	speed = 3;//�e�̑��x
	angle = 0;//�e�̊p�x
	numBullets = 1;//���˂���e�̐�

		gm->CreateBullets( x, y);

}
