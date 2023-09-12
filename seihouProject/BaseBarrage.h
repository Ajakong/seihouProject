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
	// グラフィック関連
	int m_handle;

	// 位置
	int m_x;
	int m_y;

	// 移動情報
	int m_moveX;
	int m_moveY;
};

