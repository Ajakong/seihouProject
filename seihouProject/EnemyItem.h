#pragma once
class EnemyItem
{
public:
	EnemyItem();
	~EnemyItem();

	void Init();
	void End();

	void Update();
	void Draw();

	void SetHandle(int handle);

private:
	int m_handle;
};

