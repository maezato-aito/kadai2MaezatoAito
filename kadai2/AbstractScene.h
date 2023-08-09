#pragma once
//デフォルトの抽象シーンクラス
//ユーザーはこれを継承してシーンを実装すると楽
class AbstractScene 
{
public:

	//描画以外の更新を実装する
	virtual void Update() = 0;

	//描画に関することを実装する
	virtual void Draw() const = 0;
	
	//遷移先の移動処理
	virtual  AbstractScene* change() = 0;
	
};