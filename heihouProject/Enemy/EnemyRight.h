#pragma once
#include "EnemyBase.h"
class EnemyRight
{
public:
	EnemyRight();
	virtual ~EnemyRight();

	virtual void Update();

	bool isExist() const { return m_isExist; }

	//�G�L�����N�^�[���X�^�[�g������
	virtual void Start();

private:
	int m_handle; //�O���t�B�b�N�̃n���h��

	bool m_isExist; //���݂��邩���Ȃ����̃t���O

	Vec2 m_pos;

	//�ړ���
	Vec2 m_vec;

	int m_graphWidth;
	int m_grpahHeight;

};

