#include"Player.h"


Player::Player()
{
	Get_MoveX = 0;
	Get_MoveY = 0;

}

Player::~Player()
{

}

void Player::Update()
{
	Get_MoveX = Input::Get_AnlogSticX();
	Get_MoveY = Input::Get_AnlogSticY();

	if (Get_MoveX <= -1)
	{

	}
	else if (Get_MoveX >= 1)
	{
		
	}
	else
	{

	}
}

void Player::Draw()
{
	DrawCircle(0, 0, 200, 0xffffff, FALSE);
}

void Player::Hit()
{

}