#include "EnemyMove.h"
#include <DxLib.h>
#include "Game.h"

#include <cassert>

namespace
{
	constexpr float kSpeed = 4.0f;
}

EnemyMove::EnemyMove() :
	m_handle(-1),
	m_graphWidth(0),
	m_graphHeight(0),
	m_isExist(false)
	//m_posは引数なしのコンストラクタが呼ばれる
	//引数なしのコンストラクタを呼ぶ場合は省略できる
{
}

EnemyMove::~EnemyMove()
{
}

void EnemyMove::Init()
{
	GetGraphSize(m_handle, &m_graphWidth, &m_graphHeight);
}

void EnemyMove::End()
{
}

void EnemyMove::Update()
{
	//存在しない敵は処理しない
	if (!m_isExist) return;
	
	//画面中央に着たら動きを止める
	if (m_pos.x < Game::kScreenHeight / 2)
	{
		
	}
	else
	{
		m_pos -= m_vec;
	}

	//画面外に出たら存在を消す
	if (m_pos.y <= 0.0f - m_graphHeight)
	{
		m_isExist = false;
	}
}

void EnemyMove::Draw() const
{
	//存在しない敵は表示しない
	if (!m_isExist) return;

	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_handle, false);
}

void EnemyMove::Start()
{
	m_isExist = true;

	m_pos.x = static_cast<float>(GetRand(Game::kScreenWidth - m_graphWidth));
	m_pos.y = static_cast<float>(Game::kScreenHeight);

	//1フレーム当たりの移動ベクトルを決定する
	m_vec.y = -kSpeed;
}

