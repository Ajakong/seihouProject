#pragma once
class Haikei
{
public:
	Haikei();
	~Haikei();

	void Init();
	void End();

	void Update();
	void Draw();

	void SetHandle(int handle);

private:
	int m_handle;
};

