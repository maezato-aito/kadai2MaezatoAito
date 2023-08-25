#include"Player.h"
#include "GameMain.h"
Player::Player()
{
	//�����R���̍��X�e�B�b�N�̓��͎󂯎��p�ϐ�
	Get_MoveX = 0;
	Get_MoveY = 0;

	//�����R���̃{�^�����͂̎󂯎��p�ϐ�
	Get_Button = 0;

	//�v���C���[�̍��W
	locationX = 150;
	locationY = 150;

	//�v���C���[�̈ړ����x
	speed = 3;
	
	//�v���C���[�̔��a
	radius = 30;

	//�e
	weapon = new NwaySpawner();

	//�v���C���[�̉摜
	/*image = LoadGraph("");*/

}

Player::~Player()
{
	delete weapon;
}

void Player::Update(GameMain* gm)
{
	//�A�i���O�X�e�B�b�N�̓��͂̎󂯎��
	Get_MoveX = Input::Get_LAnlogSticX();
	Get_MoveY = Input::Get_LAnlogSticY();

	//���̓{�^����ϐ��ɓ����
	DrawFormatString(0, 160, 0xffffff, "%d", Input::Get_Buttons(XINPUT_BUTTON_A), TRUE);
	//A�{�^���������ꂽ��
	if (Input::Get_Buttons(XINPUT_BUTTON_A) == 1)
	{
		//�e���Ăяo��
		
		weapon->Shoot(gm, locationX, locationY);

		
	}

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
		if (Get_MoveY >= -1 && WINDOW_Y + radius < locationY)
		{
			locationY -= speed;
		}
		//�v���C���[�̏c�̈ړ�(��)
		if (Get_MoveY <= 1 && locationY < WINDOW_HEIGHT - radius)
		{
			locationY += speed;
		}


}

void Player::Draw()
{
	DrawCircle(locationX, locationY, radius, 0xffffff, TRUE);
	DrawString(locationX, locationY, "P", 0xff3344, TRUE);

	//�X���`��
	DrawFormatString(0, 0, 0xffffff, "%d", Get_MoveX, TRUE);
	DrawFormatString(0, 40, 0xffffff, "%d", Get_MoveY, TRUE);

	DrawFormatString(0, 80, 0xffffff, "%d", locationX, TRUE);
	DrawFormatString(0, 120, 0xffffff, "%d", locationY, TRUE);

	

}

void Player::Hit()
{

}