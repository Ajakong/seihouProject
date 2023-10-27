#pragma once
#include "ShotBase.h"

class ShotToTarget : public ShotBase
{
public:
	ShotToTarget(Player* pPlayer, ShotType type);
	virtual ~ShotToTarget();

	virtual void Update() override;
	
	virtual void Start(Vec2 pos) override;
};

