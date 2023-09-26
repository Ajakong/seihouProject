#pragma once
#include "Vec2.h"

class Player;
class EnemyMove;

class BaseBarrage
{
public:
	// �e�̎��(�Gor����)���`
	enum BarrageKind
	{
		KIND_PLAYER,
		KIND_ENEMY
	};

public:
	BaseBarrage();
	~BaseBarrage();

	void Init();
	void Update();
	void Draw() const;

	void SetHandle(int handle);
	void Start(float x, float y, BarrageKind kind);	// �n�߂�Ƃ��Ɉʒu���E�e�̎�ނ�����

	// �v���C���[�Ƃ̓����蔻��
	bool Collision(Player player) const;
	// �G�Ƃ̓����蔻��
	bool Collision(EnemyMove enemy) const;

	bool GetIsExist() const { return m_isExist; }
	BarrageKind GetBarrageKind() const { return m_kinds; }

private:
	// �O���t�B�b�N�֘A
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// �g���Ă��邩���Ȃ���
	bool m_isExist;

	// �e�̎��
	BarrageKind m_kinds;

	// �����锼�a
	int m_radius;

	// �ʒu
	Vec2 m_pos;

	// �ړ����
	Vec2 m_move;
};

