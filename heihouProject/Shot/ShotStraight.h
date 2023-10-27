#pragma once
#include "ShotBase.h"
class ShotStraight : public ShotBase
{
public:
	ShotStraight(Player* pPlayer, ShotType type);
	virtual ~ShotStraight();

	virtual void Update() override;

	virtual void Start() override;
	virtual void Start(Vec2 pos) override;
};

