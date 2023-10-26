#include "EnemyToPlayer.h"
#include "DxLib.h"
//*#include "Player.h"
#include <cassert>

namespace
{
	constexpr float kSpeed = 3.0f;
}

EnemyToPlayer::EnemyToPlayer():
	m_graphWidth(0),
	m_graphHeght(0)
{
	//m_pPlayer�ɂ�SceneMain�ł��łɃ��������m�ۂ���Player��
	//�ǂ��ɒu����Ă���̂��A�̏������Ă��������̂ł����ł̓������m�ۂ����Ȃ�
}

EnemyToPlayer::~EnemyToPlayer()
{
	//m_pPlayer�̊m�ۊJ����SceneMain���Ǘ�����̂�
	//���l�ɊJ�����s��Ȃ�
}
void EnemyToPlayer::Update()
{
	//���݂��Ȃ��G�̏����͂��Ȃ�
	if (!m_isExist) return;

	m_pos += m_vec;

	//�����蔻��̍X�V
	//UpdateCollision();

	//��ʊO�ɏo���瑶�݂�����
	int width;
	int height;
	GetGraphSize(m_handle, &width, &height);

	//�ォ�炫�Ē��S�Ŏ~�܂�O��
	if (m_pos.y <= 0.0f - m_graphWidth)
	{
		m_isExist = false;
	}

	//��ʏ�Ɉړ����Ă��邪��ʏォ�犮�S�ɏo�������G������
//*	if ((m_vec.y < 0.0f) && (m_pos.x > Game::kScreenWidth) / 2)
//*	{
//*		m_isExist = false
//*	}
}

void EnemyToPlayer::Start()
{
	m_isExist = true;

	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &width, &height);

//*	m_pos.x = static_cast<float>(Game::kScreenWidth / 2); //��ʒ�����������Ă���
	m_pos.y = static_cast<float>(-height / 2); //��ʏォ������Ă���

	//��ʒ������o�R���ĉ�ʔ����܂ň�葬�x�ňړ�����
	//�R���X�g���N�^��nullptr���ݒ肳��āA����ȍ~�ύX����Ă��Ȃ���Ύ~�܂�
//*	assert(m_pPlayer);

//*	const Vec2 target = m_pPlayer->GetPos();

	//�G�̏����ʒu����^�[�Q�b�g�ʒu�Ɍ������x�N�g�����쐬����
	//���_����H���X�Ɍ������x�N�g�������߂�ꍇ�A�I�_�̍��W-���_�̍��W�ŋ��߂�
//*	Vec2 toTarget = target - m_pos;

	//�x�N�g���̒�����kSpeed�ɂ��Ă��
	//�x�N�g���̐��K���@������1�ɂ���
//*	toTarget.normalize();

	//kSpeed�ł�����

//*	m_vec = toTarget * kSpeed;
}
