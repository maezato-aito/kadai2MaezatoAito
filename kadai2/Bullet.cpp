#include"Bullet.h"

Bullet::Bullet(int x, int y)
{
	locationX=x;//X座標
	locationY=y;//Y座標

	Bulletsflg = 0;
}
Bullet::~Bullet()
{

}
void Bullet::Update()
{
	//弾の座標移動
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
	//弾の描画
	DrawCircle(locationX, locationY,10,0xf12fff, TRUE);

}
void Bullet::GetDamage()
{

}
void Bullet::SetupBullets(int x, int y, int d, int s, float a)
{

}