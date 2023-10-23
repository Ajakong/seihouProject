#include "EnemyBase.h"
#include "DxLib.h"
#include <cassert>

EnemyBase::EnemyBase():
	m_handle(-1),
	m_isExist(false),
	//m_posは引数なしのコンストラクタが呼ばれる
	//引数なしのコンストラクタを呼び出す場合省略できる

	m_graphWidth(0),
	m_graphHeight(0)
{
}

EnemyBase::~EnemyBase()
{
}

void EnemyBase::Init()
{
	GetGraphSize(m_handle, &m_graphWidth, &m_graphHeight);
}

void EnemyBase::Update()
{
	//存在しない敵の処理はしない
	if (!m_isExist) return;

	//m_posX -= kSpeed;
	m_pos += m_vec;

	//ベクトルをいじってみる
	//画面中央を超えたら止まる
}

void EnemyBase::Draw()
{
	//少数を扱う
	float fNum = 1.2f; //32bit
	double dNum = 1.2f; //64bit

	//存在しない敵の処理はしない
	if (!m_isExist)return;
	assert(m_handle != 1);

	//中心位置として描画する
	DrawRotaGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y),
		1.0, 0.0,
		m_handle, true, true);

#ifdef _DEBUG
	//当たり判定の表示
	//m_colRect.Draw(GetColor(255, 0, 0), false);
#endif
}

void EnemyBase::UpdateCollision()
{
	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &m_graphWidth, &m_graphHeight);
	//中心座標を指定して当たり判定のRactを作成する
//	m_colRect.SetCenter(m_pos.x, m_pos.y, width, height);
}
