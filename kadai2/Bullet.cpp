#include"Bullet.h"

int Bullet::speed = 3;
int Bullet::BLx = 0;
int Bullet::BLy = 0;

void Bullet::Update()
{
	//’e‚ÌÀ•WˆÚ“®
	if (BLx < WINDOW_WIDTH)
	{
		BLx += speed;
	}
}
void Bullet::Draw()
{
	//’e‚Ì•`‰æ
	DrawCircle(BLx, BLy, 0xffffff, TRUE);

}
void Bullet::GetDamage()
{

}
