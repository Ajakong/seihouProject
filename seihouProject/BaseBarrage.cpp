#include "DxLib.h"
#include <cassert>

#include "Game.h"

#include "BaseBarrage.h"
#include "Player.h"
#include "EnemyMove.h"

namespace
{
	// デフォルトスピード
	// 敵用として下に降ってくるのがデフォルトとしている
	constexpr int kDefaultSpeedX = 0;
	constexpr int kDefaultSpeedY = 8;

	constexpr int kRadius = 3;
}

BaseBarrage::BaseBarrage():
	m_handle(-1),
	m_graphSizeX(0),
	m_graphSizeY(0),
	m_isExist(true),
	m_kinds(KIND_PLAYER),	// プレイヤーとして初期化
	m_radius(kRadius),
	m_move{ kDefaultSpeedX, kDefaultSpeedY }
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
	m_pos += m_move;

	// 範囲外にいったら消す
	if (m_move.x < 0 &&
		m_pos.x < 0 - m_graphSizeX)
	{
		m_isExist = false;
	}
	if (0 < m_move.x &&
		Game::kScreenWidth + m_graphSizeX < m_pos.x)
	{
		m_isExist = false;
	}
	if (m_move.y < 0 &&
		m_pos.y < 0 - m_graphSizeY)
	{
		m_isExist = false;
	}
	if (0 < m_move.y &&
		Game::kScreenHeight + m_graphSizeY < m_pos.y)
	{
		m_isExist = false;
	}
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

void BaseBarrage::Start(float x, float y, BarrageKind kind)
{
	m_isExist = true;

	m_pos.x = x;
	m_pos.y = y;

	m_kinds = kind;
}

bool BaseBarrage::Collision(Player player) const
{
	/*Vec2 dis{ m_pos.x - player.GetPosX(), m_pos.y - player.GetPosY() };

	return (((m_radius + player.GetRadius()) * (m_radius + player.GetRadius()) < dis.SqLength());*/
	return false;
}

bool BaseBarrage::Collision(EnemyMove enemy) const
{
	// 自身とあたらない位置にいないか
	if (m_pos.y)	return false;	// 上
	if (m_pos.y)	return false;	// 下
	if (m_pos.x)	return false;	// 左
	if (m_pos.x)	return false;	// 右

	// 当たっていると返す
	return true;
}
