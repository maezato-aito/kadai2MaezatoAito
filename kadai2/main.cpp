#include"DxLib.h"
#include"AbstractScene.h"
#include"SceneManager.h"
//#include"TitleScene.h"
#include"GameMain.h"
#include"FpsCont.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	
	//widow���[�h�ŕ`��
	ChangeWindowMode(TRUE);

	//��ʃT�C�Y
	SetGraphMode(1280, 720, 32);

	//����ʕ`��
	SetDrawScreen(DX_SCREEN_BACK);

	//����������؂�
	SetWaitVSyncFlag(0);

	//����������
	if (DxLib_Init() == -1) {
		return -1;
	}

	SceneManager SMG(dynamic_cast<AbstractScene*>(new GameMain));

	//�Q�[�����[�v
	while (ProcessMessage() == 0 && SMG.change() != nullptr) 
	{

		// ��ʂ̏�����
		ClearDrawScreen();
		//�^�C�g���̕`��
		SMG.Update();
		//�^�C�g���̕`��
		SMG.Draw();
		//�t���[�����[�g����
		FpsControll_Update();
		//�ҋ@
		FpsControll_Wait();
		
		ScreenFlip();
	}
	//dxlib�I��
	DxLib_End();

	return 0;
}
