#include "ShotStraight.h"

#include "Enemy/EnemyBase.h"
#include "Player/Player.h"

namespace
{
	constexpr float kShotSpeed = 8.0f;
}

ShotStraight::ShotStraight(Player* pPlayer, ShotType type) :
	ShotBase(pPlayer, type)
{
}

ShotStraight::~ShotStraight()
{
}

void ShotStraight::Update()
{
	if (!m_isUse) return;

	m_pos += m_vec;

	// �͈͊O����
	// todo: ��ʒ[�̏ꏊ���`���Ă���Ƃ��낪�Ȃ�����
	//		 ��`�������悻��ɕύX
	if (0 < m_vec.y &&
		480 - m_graphHeight / 2 < m_pos.y)
	{
		m_isUse = false;
	}

	if (m_vec.y < 0 &&
		m_pos.y < 0 - m_graphHeight / 2)
	{
		m_isUse = false;
	}
}

void ShotStraight::Start()
{
	m_isUse = true;

	// ���̃L�����̒��S�n�ɏo��������
	//m_pos = m_pPlayer.GetPos();

	// �������֔�΂�
	m_vec.x = -kShotSpeed;

	m_vec.y = 0.0f;
}

void ShotStraight::Start(Vec2 pos)
{
	m_isUse = true;

	// ���̃L�����̒��S�n�ɏo��������
	// m_pos = pos;

	// �ォ�牺�֔�΂�
	m_vec.x = kShotSpeed;

	m_vec.y = 0.0f;
}
