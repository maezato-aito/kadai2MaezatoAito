#include"AbstractScene.h"
#include"SceneManager.h"

//アップデート処理
AbstractScene* SceneManager::Update()
{
	mScene->Update();
	return this;
}
//描画処理
void SceneManager::Draw()const
{
	mScene->Draw();
}
//シーンの切り替え
AbstractScene* SceneManager::change()
{

	AbstractScene* p = mScene->change();
	if (p != mScene) {
		delete mScene;
		mScene = p;
	}

	return p;
}
