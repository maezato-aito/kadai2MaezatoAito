#include"GameMain.h"
#include"DxLib.h"


//�R���X�g���N�^�i�Ăяo���j
GameMain::GameMain()
{
	player = new Player();
}
//�f�X�g���N�^(���)
GameMain::~GameMain()
{
	
}
//�`��ȊO�̍X�V
void GameMain::Update()
{
	player->Update();
}
//�`��̍X�V
void GameMain::Draw() const
{
	DrawString (0, 0, "�Q�[�����C��", 0xff3355, TRUE);
	
	player->Draw();
}
//�V�[���̐؂�ւ�
AbstractScene* GameMain::change()
{
	return this;
}