#include"EndScene.h"
#include"SceneManager.h"
#include"DxLib.h"
#include"GameMain.h"
//�J�[�\���ʒu


//�R���X�g���N�^�i�Ăяo���j
EndScene::EndScene()
{
	time = 0;
}
//�f�X�g���N�^(���)
EndScene::~EndScene()
{
	delete this;
}
//�`��ȊO�̍X�V
void EndScene::Update()
{
	//�^�C���̉��Z�������I��
	if (++time > 180)
	{
		DxLib_End();
	}
}
//�`��̍X�V
void EndScene::Draw() const
{

}

//�V�[���̐؂�ւ�
AbstractScene* EndScene::change()
{
	return this;
}