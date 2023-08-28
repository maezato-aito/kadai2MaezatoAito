#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"
#include"Input.h"
#include"Player.h"
#include"Bullet.h"



class GameMain :public AbstractScene
{
private:
	Player* player;
	Bullet* bullets[1000];

public:
	//�R���X�g���N�^
	GameMain();

	//�f�X�g���N�^
	~GameMain();

	//�`��ȊO�̍X�V����������
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;

	//���˕Ԃ�
	void ChangeAngle();

	//�V�[���̐؂�ւ�
	AbstractScene* change()override;

	void CreateBullets(int x, int y);
};