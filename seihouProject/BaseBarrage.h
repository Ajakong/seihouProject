#pragma once

class BaseBarrage
{
public:
	BaseBarrage();
	~BaseBarrage();

	void Init();
	void Update();
	void Draw() const;

private:
	// �O���t�B�b�N�֘A
	int m_handle;

	// �ʒu
	int m_x;
	int m_y;

	// �ړ����
	int m_moveX;
	int m_moveY;
};

