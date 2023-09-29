#include "DxLib.h"
#include <cassert>

#include "Game.h"

#include "BaseBarrage.h"
#include "Player.h"
#include "EnemyMove.h"

namespace
{
	// プレイヤーの弾の速度
	constexpr float kPlayerBarrageSpeed = 4.0f;

	// 敵の弾の速度
	constexpr float kEnemyBarrageSpeed = 4.0f;

	constexpr int kRadius = 3;
}

BaseBarrage::BaseBarrage():
	m_handle(-1),
	m_graphSizeX(0),
	m_graphSizeY(0),
	m_isExist(true),
	m_radius(kRadius)
{
}

BaseBarrage::~BaseBarrage()
{
}

void BaseBarrage::Init()
{
}

void BaseBarrage::Update()
{
	if (!m_isExist) return;

	// 位置の更新
	m_pos += m_vec;

	// 範囲外にいったら消す
	m_isExist = OutRangeCheck();
}

void BaseBarrage::Draw() const
{
	if (!m_isExist) return;

	DrawGraph(static_cast<int>(m_pos.x - m_graphSizeX / 2), static_cast<int>(m_pos.y - m_graphSizeY / 2)
			, m_handle, true);
}

void BaseBarrage::SetHandle(int handle)
{
	m_handle = handle;

	assert(m_handle != -1);

	GetGraphSize(m_handle, &m_graphSizeX, &m_graphSizeY);
}

void BaseBarrage::Start(float x, float y, BarrageKind kind, const Vec2& pos = Vec2{})
{
	m_isExist = true;

	m_pos.x = x;
	m_pos.y = y;

	switch (kind)
	{
	case KIND_PLAYER:
		// todo: まっすぐ上飛ぶ自機弾
		m_vec = Vec2{ 0.0f, 1.0f } * -kPlayerBarrageSpeed;
		break;
	case KIND_ENEMY_STRAIGHT:
		// まっすぐ上飛ぶ敵弾
		m_vec = Vec2{ 0.0f, 1.0f } * kEnemyBarrageSpeed;
		break;
	case KIND_ENEMY_AIM:
		// 自機に向かって飛ぶ敵弾
		m_vec = pos - m_pos;
		m_vec.Normalize();
		m_vec *= kEnemyBarrageSpeed;
		break;
	default:
		assert(false);
		break;
	};
}

bool BaseBarrage::Collision(const Player& player) const
{
//	Vec2 dis{ m_pos.x - player.GetPosX(), m_pos.y - player.GetPosY() };

//	return ((m_radius + player.GetRadius()) * (m_radius + player.GetRadius()) < dis.SqLength());

	// 現状player, enemyの方のGetRadius()ができていないため当たらないと返しておく
	return false;
}

bool BaseBarrage::Collision(const EnemyMove& enemy) const
{
//	Vec2 dis{ m_pos.x - enemy.GetPosX(), m_pos.y - enemy.GetPosY() };

//	return ((m_radius + enemy.GetRadius()) * (m_radius + enemy.GetRadius()) < dis.SqLength());

	return false;
}

bool BaseBarrage::OutRangeCheck() const
{
	if (m_vec.x < 0 &&
		m_pos.x < 0 - m_graphSizeX)
	{
		return false;
	}
	if (0 < m_vec.x &&
		Game::kScreenWidth + m_graphSizeX < m_pos.x)
	{
		return false;
	}
	if (m_vec.y < 0 &&
		m_pos.y < 0 - m_graphSizeY)
	{
		return false;
	}
	if (0 < m_vec.y &&
		Game::kScreenHeight + m_graphSizeY < m_pos.y)
	{
		return false;
	}

	return true;
}
