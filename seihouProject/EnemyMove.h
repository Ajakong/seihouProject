#pragma once
class EnemyMove
{
public:
	EnemyMove();
	~EnemyMove();

	void Init();
	void End();

	void Update();
	void Draw();

	void SetHandle(int handle);

private:
	int m_handle;
};

