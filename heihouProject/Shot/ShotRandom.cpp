#include <DxLib.h>
#include <cassert>
#include <cmath>

#include "ShotRandom.h"

namespace
{
	constexpr float kShotSpeed = 4.0f;
}

ShotRandom::ShotRandom(Player* pPlayer, ShotType type) :
	ShotBase(pPlayer, type)
{
}

ShotRandom::~ShotRandom()
{
}

void ShotRandom::Update()
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

void ShotRandom::Start(Vec2 pos)
{
	m_pos = pos;

	float angle = GetRand(359) / 360.f * DX_TWO_PI_F;
	float len = (GetRand(6) - 3) * 1.5f;
	
	m_vec = Vec2{ cosf(angle), sinf(angle)};
	m_vec.Normalize();
	m_vec *= kShotSpeed;
}
