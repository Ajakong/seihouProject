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

	//�x�N�g�����������Ă݂�
	//��ʒ����𒴂�����~�܂�
}

void EnemyBase::Draw()
{
	//����������
	float fNum = 1.2f; //32bit
	double dNum = 1.2f; //64bit

	//���݂��Ȃ��G�̏����͂��Ȃ�
	if (!m_isExist)return;
	assert(m_handle != 1);

	//���S�ʒu�Ƃ��ĕ`�悷��
	DrawRotaGraph(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y),
		1.0, 0.0,
		m_handle, true, true);

#ifdef _DEBUG
	//�����蔻��̕\��
	//m_colRect.Draw(GetColor(255, 0, 0), false);
#endif
}

void EnemyBase::UpdateCollision()
{
	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &m_graphWidth, &m_graphHeight);
	//���S���W���w�肵�ē����蔻���Ract���쐬����
//	m_colRect.SetCenter(m_pos.x, m_pos.y, width, height);
}
