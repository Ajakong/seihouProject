#include "EnemyRight.h"
#include "DxLib.h"

#include <cassert>

namespace
{
	constexpr float kSpeed = 4.0f;
}

EnemyRight::EnemyRight()
{
}

EnemyRight::~EnemyRight()
{
}

void EnemyRight::Update()
{
	//存在しない敵の処理はしない
	if (!m_isExist) return;

//*	m_pos += m_vec;

	//当たり判定の更新
//*	UpdateCollision();

	//画面中央を超えたら動きを止める
//*	if(m_pos.y < Game::kScreenHeight / 2)
//*	{
//*		m_isExist = false
//*	}
}

void EnemyRight::Start()
{
	m_isExist = true;

	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &m_graphWidth, &height);

//*	m_pos.x = static_cast<float>(Game::kScreenWidth + width / 2);

	//1フレーム当たりのベクトルを決定する
	m_vec.x = -kSpeed;
	//m_vec.y = 0.0f;
}
