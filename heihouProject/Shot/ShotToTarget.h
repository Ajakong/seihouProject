#pragma once
#include "ShotBase.h"

class ShotToTarget : public ShotBase
{
public:
	ShotToTarget();
	virtual ~ShotToTarget();

	virtual void Update() override;

	virtual void Start(EnemyBase* pEnemy, Player* pPlayer = nullptr) override;
	virtual void Start(Player* pPlayer, EnemyBase* pEnemy = nullptr) override;
};

