#include "ShotToTarget.h"

namespace
{
	// �e�̑��x
	constexpr float kShotSpeed = 8.0f;
}

ShotToTarget::ShotToTarget()
{
}

ShotToTarget::~ShotToTarget()
{
}

void ShotToTarget::Update()
{
	if (!m_isUse) return;

	m_pos += m_vec;

	// ��ʊO����
	// todo: ��ʒ[�̏ꏊ���`���Ă���Ƃ��낪�Ȃ�����
	//		 ��`�������悻��ɕύX
	// �����
	if (m_vec.y < 0 &&
		m_pos.y < 0 - m_graphHeight / 2.0f)
	{
		m_isUse = false;
	}
	// ������
	if (0 < m_vec.y &&
		480 < m_pos.y - -m_graphHeight / 2.0f)
	{
		m_isUse = false;
	}
	// ������
	if (m_vec.x < 0 &&
		m_pos.x < 0 - m_graphWidth / 2.0f)
	{
		m_isUse = false;
	}
	// �E����
	if (0 < m_vec.x &&
		640 < m_pos.x - -m_graphWidth / 2.0f)
	{
		m_isUse = false;
	}
}

void ShotToTarget::Start(EnemyBase* pEnemy, Player* pPlayer)
{
	m_isUse = true;

	// ���̃L�����̒��S�n�ɏo��������
	// m_pos = pEnemy->GetPos();

	m_vec = Vec2::one();
//	m_vec = pPlayer->GetPos() - pEnemy->GetPos();
	m_vec.Normalize();
	m_vec *= kShotSpeed;
}

void ShotToTarget::Start(Player* pPlayer, EnemyBase* pEnemy)
{
	m_isUse = true;

	// ���̃L�����̒��S�n�ɏo��������
	// m_pos = pPlayer->GetPos();

	m_vec = Vec2::one();
//	m_vec = pEnemy->GetPos() - pPlayer->GetPos();
	m_vec.Normalize();
	m_vec *= kShotSpeed;
}
