#include"Bullet.h"

Bullet::Bullet(int x, int y)
{
	locationX=x;//X���W
	locationY=y;//Y���W

	Bulletsflg = 1;
}
Bullet::~Bullet()
{

}
void Bullet::Update()
{
	//�e�̍��W�ړ�
	if ((WINDOW_X < locationX < WINDOW_WIDTH) && Bulletsflg==1)
	{
		locationX += 20;
	}
	else
	{
		//��ʔ����Ȃ�o���b�g�t���O��0�ɂ���B
		Bulletsflg = 0;
	}
}
void Bullet::Draw()const
{
	//�e�̕`��
	DrawCircle(locationX, locationY,10,0xf12fff, TRUE);

	//�e�̃t���O�̕`��
	DrawFormatString(0, 400, 0xffffff, "%d", Bulletsflg, TRUE);

}
void Bullet::GetDamage()
{

}
void Bullet::SetupBullets(int x, int y, int d, int s, float a)
{

}