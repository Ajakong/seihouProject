#include "EnemyLeft.h"
#include "DxLib.h"

namespace
{
	constexpr float kSpeed = 4.0f;

	constexpr float kGraphWidth = 32;
	constexpr float kGraphHeight = 64;

	constexpr float kGraphHalfWidth = kGraphWidth / 2.0f;
	constexpr float kGraphHalfHeight = kGraphHeight / 2.0f;
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
	//��ʒ����̓G�L�����N�^�[��o�ꂳ����
	m_isExist = true;

	m_pos.x = static_cast<float>(0 - kGraphHalfWidth);
//	m_pos.y = static_cast<float>(GetRand(Game::kScreenHeight - kGraphHeight) + kGraphHeight);

	m_vec.x = kSpeed;
	m_vec.y = 0.0f;
}
