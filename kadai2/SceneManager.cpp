#include"AbstractScene.h"
#include"SceneManager.h"

//�A�b�v�f�[�g����
void SceneManager::Update()
{
	mScene->Update();
}
//�`�揈��
void SceneManager::Draw()const
{
	mScene->Draw();
}
//�V�[���̐؂�ւ�
AbstractScene* SceneManager::change()
{

	AbstractScene* p = mScene->change();
	if (p != mScene) {
		delete mScene;
		mScene = p;
	}

	return p;
}