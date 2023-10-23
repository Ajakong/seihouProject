#pragma once
#include "Vec2.h"
class EnemyBase
{
public:
	EnemyBase();
	virtual ~EnemyBase();

	virtual void Init();
	virtual void Update();
	virtual void Draw();

	virtual void Start() = 0;

protected:
	//m_pos�������,m_handle�̃O���t�B�b�N�T�C�Y�𕝍����ɂ���
	//�����蔻����擾����
	virtual void UpdateCollision();

protected: 
	int m_handle; //�O���t�B�b�N�̃n���h��
	
	bool m_isExist; //���݂���̂��̃t���O(�g�p�����ǂ���)

	/*float m_posX*/
	/*float m_podY*/
	Vec2 m_pos;

	//�ړ���
	Vec2 m_vec;

	int m_graphWidth;
	int m_graphHeight;

};

