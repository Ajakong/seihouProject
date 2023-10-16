#pragma once
#include <Vec2.h>

class EnemyBase;
class Player;

class ShotBase
{
public:
	ShotBase();
	virtual ~ShotBase();

	virtual void Update() = 0;
	virtual void Draw() const;

	virtual void Start(EnemyBase* pEnemy, Player* pPlayer = nullptr) {};
	virtual void Start(Player* pPlayer, EnemyBase* pEnemy = nullptr) {};

	void SetHandle(int handle);
	bool IsUse() const { return m_isUse; }

protected:
	// グラフハンドル
	int m_handle;
	int m_graphWidth;
	int m_graphHeight;

	// 場所
	Vec2 m_pos;
	// 移動量
	Vec2 m_vec;

	// 使われているかの確認
	bool m_isUse;
};

