#pragma once
class EnemyNormal
{
public:
	EnemyNormal();
	~EnemyNormal();

	virtual void Init();
	virtual void End();

	virtual void Update();
	virtual void Draw();
};

