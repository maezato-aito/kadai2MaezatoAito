#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"
#include"Input.h"

class TitleScene :public AbstractScene 
{
private:
	Input* input;

	int menyu;

	int a;
	int CursorX;
	int CursorY;

public:

	
	
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