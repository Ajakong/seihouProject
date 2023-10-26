#pragma once
#include "EnemyBase.h"
#include "Vec2.h"

class Player;


class EnemyToPlayer
{
public:
	EnemyToPlayer();
	virtual ~EnemyToPlayer();

	virtual void Update();

	//�����o�ϐ��ɃA�N�Z�X����
	//void SetPlayer(Player* player) { m_pPlayer = pPlayer; }

	//�G�L�����N�^�[���X�^�[�g������
	virtual void Start();

private:
	int m_handle; //�O���t�B�b�N�̃n���h��
	bool m_isExist; //���݂��邩�t���O(�g�p�����ǂ���)
	//Player* m_pPlayer;

	//�\���ʒu
	Vec2 m_pos;
	//�ړ���
	Vec2 m_vec;

	int m_graphWidth;
	int m_graphHeght;


};

