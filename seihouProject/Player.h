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

	float getradius();

	void SetHandle(int handle);

private:
	int m_handle;    //グラフィックのハンドル
private:
	int m_pHp;
	int m_bombNum;

	Vec2 m_pos;

	int m_radius;
};