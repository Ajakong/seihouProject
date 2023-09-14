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
	// グラフィック関連
	int m_handle;
	int m_graphSizeX;
	int m_graphSizeY;

	// 位置
	int m_posX;
	int m_posY;

	// 移動情報
	int m_speedX;
	int m_speedY;
};

