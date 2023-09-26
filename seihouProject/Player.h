#pragma once

class Player
{
public:
	Player();
	~Player();

	void Init();
	void End();
	void Update();
	void Draw();

	void SetHandle(int handle);

private:
	int m_handle;    //�O���t�B�b�N�̃n���h��



	float m_posX;
	float m_posY;
};