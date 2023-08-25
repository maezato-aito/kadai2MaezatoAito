#include"GameMain.h"
#include"DxLib.h"


//�R���X�g���N�^�i�Ăяo���j
GameMain::GameMain()
{
	player = new Player();
	for (int i = 0; i < 100; i++)
	{
		bullets[i] = nullptr;
	}
}
//�f�X�g���N�^(���)
GameMain::~GameMain()
{
	delete player;
	delete[] bullets;
}
//�`��ȊO�̍X�V
AbstractScene* GameMain::Update()
{
	player->Update(this);
	for (int i = 0; i < 100; i++)
	{
		if (bullets[i] != nullptr) {
			bullets[i]->Update();
		}
	}
	return this;
}
//�`��̍X�V
void GameMain::Draw() const
{
	DrawString (0, 0, "�Q�[�����C��", 0xff3355, TRUE);
	

	
	player->Draw();

	for (int i = 0; i < 100; i++)
	{
		if (bullets[i] != nullptr) {
			bullets[i]->Draw();
		}
	}

	
}
//�V�[���̐؂�ւ�
AbstractScene* GameMain::change()
{
	return this;
}

void GameMain::CreateBullets(int x,int y)
{
	for (int i = 0; i < 100; i++)
	{
		if (bullets[i] == nullptr) {
			//this->bullets[i] = bullets;
			bullets[i] = new Bullet(x, y);
			break;
		}
	}
}
