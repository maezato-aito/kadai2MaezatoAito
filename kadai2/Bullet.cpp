#include"Bullet.h"

Bullet::Bullet(int x, int y)
{
	locationX=x;//X���W
	locationY=y;//Y���W


	/*player = new Player();*/
}
//Bullet::Bullet(float a)
//{
//	locationX=20;//X���W
//	locationY=50;//Y���W
//
//	/*player = new Player();*/
//}
Bullet::~Bullet()
{
	/*delete player;*/
}
void Bullet::Update()
{
	//�e�̍��W�ړ�
	if (locationX < WINDOW_WIDTH)
	{
		locationX += 1;
	}
}
void Bullet::Draw()const
{
	//�e�̕`��
	DrawCircle(locationX, locationY,10,0xf12fff, TRUE);

}
void Bullet::GetDamage()
{

}
void Bullet::SetupBullets(int x, int y, int d, int s, float a)
{

}