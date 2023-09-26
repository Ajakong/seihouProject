#pragma once
#include "Vec2.h"

class EnemyMove
{
public:
	EnemyMove();
	~EnemyMove();

	void Init();
	void End();

	void Update();
	void Draw() const;

	//�����o�ϐ��ɃA�N�Z�X����
	void SetHandle(int handle) { m_handle = handle; }


	
	//�G�L�����N�^�[���X�^�[�g������
	void Start();

	//�G��HP
	

private:
	int m_handle; //�O���t�B�b�N�̃n���h��
	int m_graphWidth;
	int m_graphHeight;

	bool m_isExist; //���݂��Ă��邩�t���O(�g�p�����ǂ���)

	//�\���ʒu
	Vec2 m_pos;

	//�ړ���	//1�t���[��������̈ړ��x�N�g��������
	Vec2 m_vec;

};

