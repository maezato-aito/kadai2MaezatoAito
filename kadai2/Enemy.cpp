#include"Enemy.h"

Enemy::Enemy()
{
	locationX = 900;
	locationY = 360;

	radius = 90;
}
Enemy::~Enemy()
{

}
void Enemy::Update(GameMain* gm)
{

}
void Enemy::Draw()
{
	DrawCircle(locationX, locationY, radius, 0x000fff, TRUE);
	DrawString(locationX, locationY, "E", 0xff3344, TRUE);
}

void Enemy::Hit()
{

}