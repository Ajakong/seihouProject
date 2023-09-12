#pragma once

class BaseBarrage
{
public:
	BaseBarrage();
	~BaseBarrage();

	void Init();
	void Update();
	void Draw() const;

	void SetHandle(int handle);
	void SetPos(int x, int y);

private:
	// �O���t�B�b�N�֘A
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// �ʒu
	int m_x;
	int m_y;

	// �ړ����
	int m_speedX;
	int m_speedY;
};

