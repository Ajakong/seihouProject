#include "EnemyLeft.h"
#include "DxLib.h"

namespace
{
	constexpr float kSpeed = 4.0f;
}

EnemyLeft::EnemyLeft() : EnemyBase() //明示的に呼ぶ場合の例
{
	//基底クラスのコンストラクタを明示的に呼ばなくてもここで呼ばれる
}

EnemyLeft::~EnemyLeft()
{
	//デストラクタも呼ばれる
}

void EnemyLeft::Update()
{
	//存在しない敵の処理はしない
	if (!m_isExist)return;

	m_pos += m_vec;

	//当たり判定の更新
	UpdateCollision();

	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &width, &height);

//*	if (m_pos.x > Game::kScreenWidth)
//*	{
//*		m_isExist = false;
//*	}
}

void EnemyLeft::Start()
{
	
}
