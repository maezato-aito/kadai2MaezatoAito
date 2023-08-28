#include"Bullet.h"

Bullet::Bullet(int x, int y)
{
	locationX=x;//XÀ•W
	locationY=y;//YÀ•W

	Bulletsflg = 0;
}
Bullet::~Bullet()
{

}
void Bullet::Update()
{
	//’e‚ÌÀ•WˆÚ“®
	if (WINDOW_X < locationX < WINDOW_WIDTH)
	{
		locationX += 20;
	}
	else
	{

	}
}
void Bullet::Draw()const
{
	//’e‚Ì•`‰æ
	DrawCircle(locationX, locationY,10,0xf12fff, TRUE);

}
void Bullet::GetDamage()
{

}
void Bullet::SetupBullets(int x, int y, int d, int s, float a)
{

}