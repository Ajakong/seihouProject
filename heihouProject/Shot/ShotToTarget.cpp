#include "ShotToTarget.h"

namespace
{
	// 弾の速度
	constexpr float kShotSpeed = 8.0f;
}

ShotToTarget::ShotToTarget(Player* pPlayer, ShotType type) :
	ShotBase(pPlayer, type)
{
}

ShotToTarget::~ShotToTarget()
{
}

void ShotToTarget::Update()
{
	if (!m_isUse) return;

	m_pos += m_vec;

	// 画面外処理
	// todo: 画面端の場所を定義しているところがないため
	//		 定義完了次第それに変更
	// 上方向
	if (m_vec.y < 0 &&
		m_pos.y < 0 - m_graphHeight / 2.0f)
	{
		m_isUse = false;
	}
	// 下方向
	if (0 < m_vec.y &&
		480 < m_pos.y - -m_graphHeight / 2.0f)
	{
		m_isUse = false;
	}
	// 左方向
	if (m_vec.x < 0 &&
		m_pos.x < 0 - m_graphWidth / 2.0f)
	{
		m_isUse = false;
	}
	// 右方向
	if (0 < m_vec.x &&
		640 < m_pos.x - -m_graphWidth / 2.0f)
	{
		m_isUse = false;
	}
}

void ShotToTarget::Start(Vec2 pos)
{
	m_isUse = true;

	// プレイヤー中心のスタート
	if (m_type == SHOT_TYPE_ENEMY)
	{
		m_pos = m_pPlayer->GetPos();

		m_vec = pos - m_pos;
	}
	// 敵中心のスタート
	else
	{
		m_pos = pos;

		m_vec = m_pPlayer->GetPos() - pos;
	}

	m_vec.Normalize();
	m_vec *= kShotSpeed;
}