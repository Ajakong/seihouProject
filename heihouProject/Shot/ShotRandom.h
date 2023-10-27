#pragma once
#include "ShotBase.h"
class ShotRandom : public ShotBase
{
public:
	ShotRandom(Player* pPlayer, ShotType type);
	virtual ~ShotRandom();

	virtual void Update() override;

	virtual void Start(Vec2 pos) override;
};

