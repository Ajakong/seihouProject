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

private:
	int m_handle;    //�O���t�B�b�N�̃n���h��



	float m_posX;
	float m_posY;
};