#pragma once
#include "EnemyBase.h"

class EnemyLeft : public EnemyBase
{
public:
	EnemyLeft();
	virtual ~EnemyLeft();

	virtual void Update();
	virtual void Start();
};

