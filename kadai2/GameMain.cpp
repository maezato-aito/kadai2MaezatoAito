#include"GameMain.h"
#include"DxLib.h"


//�R���X�g���N�^�i�Ăяo���j
GameMain::GameMain()
{
	
}
//�f�X�g���N�^(���)
GameMain::~GameMain()
{
	
}
//�`��ȊO�̍X�V
void GameMain::Update()
{
	
	

}
//�`��̍X�V
void GameMain::Draw() const
{
	
	DrawString (0, 0, "�Q�[�����C��", 0xff3355, TRUE);
	/*DrawFormatString(20,0,0xff3355,"%d",)*/
}
//�V�[���̐؂�ւ�
AbstractScene* GameMain::change()
{
	return this;
}