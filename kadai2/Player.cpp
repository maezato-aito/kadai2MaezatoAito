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
	
	//プレイヤーの半径
	radius = 30;
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

		//プレイヤーの横移動(左)
		if (Get_MoveX <= -1 && WINDOW_X + radius < locationX)
		{
			locationX -= speed;
		}
		//プレイヤーの横移動(右)
		if (1 <= Get_MoveX && locationX < WINDOW_WIDTH - radius)
		{
			locationX += speed;
		}

		//プレイヤーの縦の移動(上)
		if (Get_MoveY <= -1 && WINDOW_Y + radius < locationY)
		{
			locationY -= speed;
		}
		//プレイヤーの縦の移動(下)
		if (Get_MoveY >= 1 && locationY < WINDOW_HEIGHT - radius)
		{
			locationY += speed;
		}
}

void Player::Draw()
{
	DrawCircle(locationX, locationY, radius, 0xffffff, TRUE);

	//傾き描画
	DrawFormatString(0, 0, 0xffffff, "%d", Get_MoveX, TRUE);
	DrawFormatString(0, 40, 0xffffff, "%d", Get_MoveY, TRUE);

	DrawFormatString(0, 80, 0xffffff, "%d", locationX, TRUE);
	DrawFormatString(0, 120, 0xffffff, "%d", locationY, TRUE);

}

void Player::Hit()
{

}