#pragma once
//�f�t�H���g�̒��ۃV�[���N���X
//���[�U�[�͂�����p�����ăV�[������������Ɗy
class AbstractScene 
{
public:

	//�`��ȊO�̍X�V����������
	virtual void Update() = 0;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw() const = 0;
	
	//�J�ڐ�̈ړ�����
	virtual  AbstractScene* change() = 0;
	
};