#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"
#include"Input.h"



class GameMain :public AbstractScene
{
private:
	Input* input;
public:
	//�R���X�g���N�^
	GameMain();

	//�f�X�g���N�^
	~GameMain();

	//�`��ȊO�̍X�V����������
	void Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;

	//���˕Ԃ�
	void ChangeAngle();

	//�V�[���̐؂�ւ�
	AbstractScene* change()override;
};