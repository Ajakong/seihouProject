#pragma once
class EnemyItem
{
public:
	EnemyItem();
	~EnemyItem();

	virtual void Init();
	virtual void End();

	virtual void Update();
	virtual void Draw();

};

