#include "EnemyRight.h"
#include "DxLib.h"

#include <cassert>

namespace
{
	constexpr float kSpeed = 4.0f;
}

EnemyRight::EnemyRight()
{
}

EnemyRight::~EnemyRight()
{
}

void EnemyRight::Update()
{
	//���݂��Ȃ��G�̏����͂��Ȃ�
	if (!m_isExist) return;

//*	m_pos += m_vec;

	//�����蔻��̍X�V
//*	UpdateCollision();

	//��ʒ����𒴂����瓮�����~�߂�
//*	if(m_pos.y < Game::kScreenHeight / 2)
//*	{
//*		m_isExist = false
//*	}
}

void EnemyRight::Start()
{
	m_isExist = true;

	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &m_graphWidth, &height);

//*	m_pos.x = static_cast<float>(Game::kScreenWidth + width / 2);

	//1�t���[��������̃x�N�g�������肷��
	m_vec.x = -kSpeed;
	//m_vec.y = 0.0f;
}
