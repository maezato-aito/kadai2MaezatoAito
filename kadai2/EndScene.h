#pragma once
#include"AbstractScene.h"
#include"SceneManager.h"


class EndScene :public AbstractScene
{
private:

public:

	int time;

	EndScene();
	~EndScene();
	//�`��ȊO�̍X�V����������
	void Update() override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw() const override;

	//�V�[���̐؂�ւ�
	AbstractScene* change()override;
};