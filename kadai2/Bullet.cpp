#include"Bullet.h"

Bullet::Bullet(int x, int y)
{
	locationX=x;//X座標
	locationY=y;//Y座標

	Bulletsflg = 1;
}
Bullet::~Bullet()
{

}
void Bullet::Update()
{
	//弾の座標移動
	if ((WINDOW_X < locationX < WINDOW_WIDTH) && Bulletsflg==1)
	{
		locationX += 20;
	}
	else
	{
		//画面買いならバレットフラグを0にする。
		Bulletsflg = 0;
	}
}
void Bullet::Draw()const
{
	//弾の描画
	DrawCircle(locationX, locationY,10,0xf12fff, TRUE);

	//弾のフラグの描画
	DrawFormatString(0, 400, 0xffffff, "%d", Bulletsflg, TRUE);

}
void Bullet::GetDamage()
{

}
void Bullet::SetupBullets(int x, int y, int d, int s, float a)
{

}