#include"GameMain.h"
#include"DxLib.h"


//�R���X�g���N�^�i�Ăяo���j
GameMain::GameMain()
{
	player = new Player();
	enemy = new Enemy();

	for (int i = 0; i < 1000; i++)
	{
		bullets[i] = nullptr;
	}
}
//�f�X�g���N�^(���)
GameMain::~GameMain()
{
	delete player;
	delete enemy;
	delete[] bullets;
}
//�`��ȊO�̍X�V
AbstractScene* GameMain::Update()
{
	player->Update(this);
	for (int i = 0; i < 1000; i++)
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
	enemy->Draw();

	for (int i = 0; i < 1000; i++)
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
	for (int i = 0; i < 1000; i++)
	{
		if (bullets[i] == nullptr) {
			bullets[i] = new Bullet(x, y);
			break;
		}
	}
}
