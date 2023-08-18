#include"Player.h"



Player::Player()
{
	Get_MoveX = 0;
	Get_MoveY = 0;

	//プレイヤーの座標
	locationX = 150;
	locationY = 150;

	//プレイヤーの移動速度
	speed = 3;
	
	//プレイヤーの画像
	/*image = LoadGraph("");*/
}

Player::~Player()
{

}

void Player::Update()
{
	//アナログスティックの入力の受け取り
	Get_MoveX = Input::Get_AnlogSticX();
	Get_MoveY = Input::Get_AnlogSticY();
	if (WINDOW_X <= locationX <= WINDOW_WIDTH && WINDOW_Y <= locationY <= WINDOW_HEIGHT) 
	{
		//プレイヤーの横移動(左)
		if (Get_MoveX <= -1)
		{
			locationX -= speed;
		}
		//プレイヤーの横移動(右)
		else if (1 <= Get_MoveX)
		{
			locationX += speed;
		}

		//プレイヤーの縦の移動(上)
		if (Get_MoveY <= -1)
		{
			locationY -= speed;
		}
		//プレイヤーの縦の移動(下)
		else if (Get_MoveY >= 1)
		{
			locationY += speed;
		}
	}
}

void Player::Draw()
{
	DrawCircle(locationX, locationY, 20, 0xffffff, TRUE);

	//傾き描画
	DrawFormatString(0, 0, 0xffffff, "%d", Get_MoveX, TRUE);
	DrawFormatString(0, 40, 0xffffff, "%d", Get_MoveY, TRUE);

	DrawFormatString(0, 80, 0xffffff, "%d", locationX, TRUE);
	DrawFormatString(0, 120, 0xffffff, "%d", locationY, TRUE);

}

void Player::Hit()
{

}