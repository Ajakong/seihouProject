#pragma once
#include"Vec2.h"


class Player
{
public:
	Player();
	~Player();

	void Init();
	void End();
	void Update();
	void Draw();

	float GetPosX();

	float GetPosY();

	float GetRadius();

	void SetHandle(int handle);

	//�A�C�e���ɓ���������HP��
	void Regene() { m_pHp++; }
private:
	int m_handle;    //�O���t�B�b�N�̃n���h��
private:
	int m_pHp;
	//Player�̃{��������
	int m_bombNum;

	Vec2 m_pos;

	int m_radius;
};
