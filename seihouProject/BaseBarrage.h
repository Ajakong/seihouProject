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
		KIND_ENEMY_STRAIGHT,
		KIND_ENEMY_AIM
	};

public:
	BaseBarrage();
	~BaseBarrage();

	void Init();
	void Update();
	void Draw() const;

	void SetHandle(int handle);
	// 始めるときに位置情報・弾の種類を入れる
	void Start(float x, float y, BarrageKind kind, const Vec2& pos = Vec2{});

	// プレイヤーとの当たり判定
	bool Collision(const Player& player) const;
	// 敵との当たり判定
	bool Collision(const EnemyMove& enemy) const;

	bool GetIsExist() const { return m_isExist; }

private:
	// 画面外にいるかの判定
	bool OutRangeCheck() const;

private:
	// グラフィック関連
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// 使われているかいないか
	bool m_isExist;

	// 当たる半径
	int m_radius;

	// 位置
	Vec2 m_pos;

	// 移動情報
	Vec2 m_vec;
};

