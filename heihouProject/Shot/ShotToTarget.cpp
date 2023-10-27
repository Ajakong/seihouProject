#include "ShotToTarget.h"

namespace
{
	// �e�̑��x
	constexpr float kShotSpeed = 8.0f;
}

ShotToTarget::ShotToTarget(Player* pPlayer, ShotType type) :
	ShotBase(pPlayer, type)
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

void ShotToTarget::Start(Vec2 pos)
{
	m_isUse = true;

	// �v���C���[���S�̃X�^�[�g
	if (m_type == SHOT_TYPE_ENEMY)
	{
		m_pos = m_pPlayer->GetPos();

		m_vec = pos - m_pos;
	}
	// �G���S�̃X�^�[�g
	else
	{
		m_pos = pos;

		m_vec = m_pPlayer->GetPos() - pos;
	}

	m_vec.Normalize();
	m_vec *= kShotSpeed;
}