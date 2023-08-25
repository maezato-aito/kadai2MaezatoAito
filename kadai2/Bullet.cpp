#include"Bullet.h"

Bullet::Bullet(int x, int y)
{
	locationX=x;//X座標
	locationY=y;//Y座標


	/*player = new Player();*/
}
//Bullet::Bullet(float a)
//{
//	locationX=20;//X座標
//	locationY=50;//Y座標
//
//	/*player = new Player();*/
//}
Bullet::~Bullet()
{
	/*delete player;*/
}
void Bullet::Update()
{
	//弾の座標移動
	if (locationX < WINDOW_WIDTH)
	{
		locationX += 1;
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