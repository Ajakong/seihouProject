#pragma once

class BaseBarrage
{
public:
	BaseBarrage();
	virtual ~BaseBarrage();

	void Init();
	virtual void Update();
	virtual void Draw() const;

	void SetHandle(int handle);
	void SetPos(int x, int y);

private:
	// �O���t�B�b�N�֘A
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// �ʒu
	int m_posX;
	int m_posY;

	// �ړ����
	int m_speedX;
	int m_speedY;
};

