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
	//m_pos�͈����Ȃ��̃R���X�g���N�^���Ă΂��
	//�����Ȃ��̃R���X�g���N�^���Ăԏꍇ�͏ȗ��ł���
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
	//���݂��Ȃ��G�͏������Ȃ�
	if (!m_isExist) return;
	
	//��ʒ����ɒ����瓮�����~�߂�
	if (m_pos.x < Game::kScreenHeight / 2)
	{
		
	}
	else
	{
		m_pos -= m_vec;
	}

	//��ʊO�ɏo���瑶�݂�����
	if (m_pos.y <= 0.0f - m_graphHeight)
	{
		m_isExist = false;
	}
}

void EnemyMove::Draw() const
{
	//���݂��Ȃ��G�͕\�����Ȃ�
	if (!m_isExist) return;

	DrawGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), m_handle, false);
}

void EnemyMove::Start()
{
	m_isExist = true;

	m_pos.x = static_cast<float>(GetRand(Game::kScreenWidth - m_graphWidth));
	m_pos.y = static_cast<float>(Game::kScreenHeight);

	//1�t���[��������̈ړ��x�N�g�������肷��
	m_vec.y = -kSpeed;
}

