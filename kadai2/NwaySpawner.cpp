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
	speed = 3;//’e‚Ì‘¬“x
	angle = 0;//’e‚ÌŠp“x
	numBullets = 1;//”­ŽË‚·‚é’e‚Ì”

		gm->CreateBullets( x, y);

}
