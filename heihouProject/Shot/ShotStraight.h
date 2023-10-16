#pragma once
#include "ShotBase.h"
class ShotStraight : public ShotBase
{
public:
	ShotStraight();
	virtual ~ShotStraight();

	virtual void Update() override;

	virtual void Start(EnemyBase* pEnemy, Player* pPlayer = nullptr) override;
	virtual void Start(Player* pPlayer, EnemyBase* pEnemy = nullptr) override;
};

