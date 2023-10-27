#include "ShotStraight.h"

#include "Enemy/EnemyBase.h"
#include "Player/Player.h"

namespace
{
	constexpr float kShotSpeed = 8.0f;
}

ShotStraight::ShotStraight(Player* pPlayer, ShotType type) :
	ShotBase(pPlayer, type)
{
}

ShotStraight::~ShotStraight()
{
}

void ShotStraight::Update()
{
	if (!m_isUse) return;

	m_pos += m_vec;

	// 範囲外処理
	// todo: 画面端の場所を定義しているところがないため
	//		 定義完了次第それに変更
	if (0 < m_vec.y &&
		480 - m_graphHeight / 2 < m_pos.y)
	{
		m_isUse = false;
	}

	if (m_vec.y < 0 &&
		m_pos.y < 0 - m_graphHeight / 2)
	{
		m_isUse = false;
	}
}

void ShotStraight::Start()
{
	m_isUse = true;

	// そのキャラの中心地に出現させる
	//m_pos = m_pPlayer.GetPos();

	// 下から上へ飛ばす
	m_vec.x = -kShotSpeed;

	m_vec.y = 0.0f;
}

void ShotStraight::Start(Vec2 pos)
{
	m_isUse = true;

	// そのキャラの中心地に出現させる
	// m_pos = pos;

	// 上から下へ飛ばす
	m_vec.x = kShotSpeed;

	m_vec.y = 0.0f;
}
