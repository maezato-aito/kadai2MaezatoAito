#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"

class TitleScene :public AbstractScene 
{
private:

public:

	int  OldKey;
	int  NowKey;
	int  KeyFlg;
	int menyu;

	int CursorX;
	int CursorY;
	
	//�R���X�g���N�^
	TitleScene();

	//�f�X�g���N�^
	~TitleScene();

	//�`��ȊO�̍X�V����������
	void Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;

	//�V�[���̐؂�ւ�
	AbstractScene* change()override;
};