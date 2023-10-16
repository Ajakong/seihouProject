#pragma once
#include <Vec2.h>

class EnemyBase;
class Player;

class ShotBase
{
public:
	ShotBase();
	virtual ~ShotBase();

	virtual void Update() = 0;
	virtual void Draw() const;

	virtual void Start(EnemyBase* pEnemy, Player* pPlayer = nullptr) {};
	virtual void Start(Player* pPlayer, EnemyBase* pEnemy = nullptr) {};

	void SetHandle(int handle);
	bool IsUse() const { return m_isUse; }

protected:
	// �O���t�n���h��
	int m_handle;
	int m_graphWidth;
	int m_graphHeight;

	// �ꏊ
	Vec2 m_pos;
	// �ړ���
	Vec2 m_vec;

	// �g���Ă��邩�̊m�F
	bool m_isUse;
};

