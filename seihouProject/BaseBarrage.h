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
		KIND_ENEMY_STRAIGHT,
		KIND_ENEMY_AIM
	};

public:
	BaseBarrage();
	~BaseBarrage();

	void Init();
	void Update();
	void Draw() const;

	void SetHandle(int handle);
	// �n�߂�Ƃ��Ɉʒu���E�e�̎�ނ�����
	void Start(float x, float y, BarrageKind kind, const Vec2& pos = Vec2{});

	// �v���C���[�Ƃ̓����蔻��
	bool Collision(const Player& player) const;
	// �G�Ƃ̓����蔻��
	bool Collision(const EnemyMove& enemy) const;

	bool GetIsExist() const { return m_isExist; }

private:
	// ��ʊO�ɂ��邩�̔���
	bool OutRangeCheck() const;

private:
	// �O���t�B�b�N�֘A
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// �g���Ă��邩���Ȃ���
	bool m_isExist;

	// �����锼�a
	int m_radius;

	// �ʒu
	Vec2 m_pos;

	// �ړ����
	Vec2 m_vec;
};

