#include"Input.h"

int Input::AnalogStickX = 0;
int Input::AnalogStickY = 0;

Input::Input()
{
	
}



void Input::Update()
{
	GetJoypadAnalogInput(&AnalogStickX, &AnalogStickY, DX_INPUT_KEY_PAD1);
}
