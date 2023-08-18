#include"Player.h"



Player::Player()
{
	Get_MoveX = 0;
	Get_MoveY = 0;

	//�v���C���[�̍��W
	locationX = 150;
	locationY = 150;

	//�v���C���[�̈ړ����x
	speed = 3;
	
	//�v���C���[�̔��a
	radius = 30;
	//�v���C���[�̉摜
	/*image = LoadGraph("");*/
}

Player::~Player()
{

}

void Player::Update()
{
	//�A�i���O�X�e�B�b�N�̓��͂̎󂯎��
	Get_MoveX = Input::Get_AnlogSticX();
	Get_MoveY = Input::Get_AnlogSticY();

		//�v���C���[�̉��ړ�(��)
		if (Get_MoveX <= -1 && WINDOW_X + radius < locationX)
		{
			locationX -= speed;
		}
		//�v���C���[�̉��ړ�(�E)
		if (1 <= Get_MoveX && locationX < WINDOW_WIDTH - radius)
		{
			locationX += speed;
		}

		//�v���C���[�̏c�̈ړ�(��)
		if (Get_MoveY <= -1 && WINDOW_Y + radius < locationY)
		{
			locationY -= speed;
		}
		//�v���C���[�̏c�̈ړ�(��)
		if (Get_MoveY >= 1 && locationY < WINDOW_HEIGHT - radius)
		{
			locationY += speed;
		}
}

void Player::Draw()
{
	DrawCircle(locationX, locationY, radius, 0xffffff, TRUE);

	//�X���`��
	DrawFormatString(0, 0, 0xffffff, "%d", Get_MoveX, TRUE);
	DrawFormatString(0, 40, 0xffffff, "%d", Get_MoveY, TRUE);

	DrawFormatString(0, 80, 0xffffff, "%d", locationX, TRUE);
	DrawFormatString(0, 120, 0xffffff, "%d", locationY, TRUE);

}

void Player::Hit()
{

}