#pragma once
#include"SphereCollider.h"

class CharaBase : public SphereCollider
{
public:

	virtual void Update() = 0;//�Q�[�����C���V�[�����|�C���^�Ŏ󂯎��
	virtual void Draw() = 0;
	virtual void Hit() = 0;//�_���[�W���󂯂����̏���

	static int speed;
	static int image;
};

