#include "EnemyLeft.h"
#include "DxLib.h"

namespace
{
	constexpr float kSpeed = 4.0f;
}

EnemyLeft::EnemyLeft() : EnemyBase() //�����I�ɌĂԏꍇ�̗�
{
	//���N���X�̃R���X�g���N�^�𖾎��I�ɌĂ΂Ȃ��Ă������ŌĂ΂��
}

EnemyLeft::~EnemyLeft()
{
	//�f�X�g���N�^���Ă΂��
}

void EnemyLeft::Update()
{
	//���݂��Ȃ��G�̏����͂��Ȃ�
	if (!m_isExist)return;

	m_pos += m_vec;

	//�����蔻��̍X�V
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
