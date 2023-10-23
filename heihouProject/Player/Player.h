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

	//アイテムに当たったらHP回復
	void Regene() { m_pHp++; }
private:
	int m_handle;    //グラフィックのハンドル
private:
	int m_pHp;
	//Playerのボム所持数
	int m_bombNum;

	Vec2 m_pos;

	int m_radius;
};
