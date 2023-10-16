#include "EnemyBase.h"
#include "DxLib.h"
#include <cassert>

EnemyBase::EnemyBase():
	m_handle(-1),
	m_isExist(false),
	//m_pos�͈����Ȃ��̃R���X�g���N�^���Ă΂��
	//�����Ȃ��̃R���X�g���N�^���Ăяo���ꍇ�ȗ��ł���

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
	//���݂��Ȃ��G�̏����͂��Ȃ�
	if (!m_isExist) return;

	//m_posX -= kSpeed;
	m_pos += m_vec;
}

void EnemyBase::Draw()
{
}
