#include "Application.h"
#include <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application& application = Application::GetInstance();

	if (!application.Init())
	{
		return -1;// ���̃A�v���͕s���I�����܂����B
	}
	application.Run();

	// ���̃A�v���͐���I�����܂����B
	return 0;
}