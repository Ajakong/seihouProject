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
}

void EnemyBase::Draw()
{
}
