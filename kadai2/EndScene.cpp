#include"EndScene.h"
#include"SceneManager.h"
#include"DxLib.h"
#include"GameMain.h"
//カーソル位置


//コンストラクタ（呼び出し）
EndScene::EndScene()
{
	time = 0;
}
//デストラクタ(解体)
EndScene::~EndScene()
{
	delete this;
}
//描画以外の更新
void EndScene::Update()
{
	//タイムの加算処理＆終了
	if (++time > 180)
	{
		DxLib_End();
	}
}
//描画の更新
void EndScene::Draw() const
{

}

//シーンの切り替え
AbstractScene* EndScene::change()
{
	return this;
}