#pragma once
#include"SphereCollider.h"

class CharaBase : public SphereCollider
{
public://�A�N�Z�X�\

	virtual void Update() = 0;//�Q�[�����C���V�[�����|�C���^�Ŏ󂯎��
	virtual void Draw() = 0;
	virtual void Hit() = 0;//�_���[�W���󂯂����̏���

protected://�p��

	int speed;
	int image;

private://�A�N�Z�X����
	


};
