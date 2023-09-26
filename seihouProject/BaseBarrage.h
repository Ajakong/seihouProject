#pragma once
#include "Vec2.h"

class Player;
class EnemyMove;

class BaseBarrage
{
public:
	// 弾の種類(敵or味方)を定義
	enum BarrageKind
	{
		KIND_PLAYER,
		KIND_ENEMY
	};

public:
	BaseBarrage();
	~BaseBarrage();

	void Init();
	void Update();
	void Draw() const;

	void SetHandle(int handle);
	void Start(float x, float y, BarrageKind kind);	// 始めるときに位置情報・弾の種類を入れる

	// プレイヤーとの当たり判定
	bool Collision(Player player) const;
	// 敵との当たり判定
	bool Collision(EnemyMove enemy) const;

	bool GetIsExist() const { return m_isExist; }
	BarrageKind GetBarrageKind() const { return m_kinds; }

private:
	// グラフィック関連
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// 使われているかいないか
	bool m_isExist;

	// 弾の種類
	BarrageKind m_kinds;

	// 当たる半径
	int m_radius;

	// 位置
	Vec2 m_pos;

	// 移動情報
	Vec2 m_move;
};

