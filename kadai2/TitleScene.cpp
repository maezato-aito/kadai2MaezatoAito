#include"TitleScene.h"
#include"SceneManager.h"
#include"GameMain.h"
#include"EndScene.h"
#include"DxLib.h"

//�R���X�g���N�^�i�Ăяo���j
TitleScene::TitleScene() 
{
	 CursorX = 260;
	 CursorY = 245;
	 menyu = 0;
}
//�f�X�g���N�^(���)
TitleScene::~TitleScene() 
{
	delete this;
}
//�`��ȊO�̍X�V
void TitleScene::Update()
{

	OldKey = NowKey;
	NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	KeyFlg = NowKey & ~OldKey;

	if (KeyFlg & PAD_INPUT_DOWN)
	{
		++menyu;
		if (++menyu > 2)
		{
			menyu = 0;
		}
	}
	if (KeyFlg & PAD_INPUT_UP) {
		--menyu;
		if (--menyu < 0)
		{
			menyu = 2;
		}
	}
}
//�`��̍X�V
void TitleScene::Draw() const 
{
	

	DrawString(0,0, "�^�C�g�����j���[", 0xffffff, TRUE);

	// �^�C�g���摜�̕\��
	LoadGraphScreen(0, 0, "images/Title.bmp", TRUE);

	int cursor = 50 * menyu;

	//�J�[�\���`��
	DrawTriangle(CursorX, CursorY + cursor, CursorX, CursorY + 50 + cursor, CursorX + 25, CursorY + 25 + cursor, 0x123456, TRUE);

	DrawFormatString(20, 20, 0x746378, "%d", menyu, TRUE);
}
//�V�[���̐؂�ւ�
AbstractScene* TitleScene::change() 
{
	if (KeyFlg & PAD_INPUT_A) {
		if (menyu == 0)
		{
			return new GameMain();
		}
	}
	if (KeyFlg & PAD_INPUT_A) {
		if (menyu == 2)
		{
			return new EndScene();
		}
	}

	return this;
}