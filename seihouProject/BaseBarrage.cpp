#include "DxLib.h"
#include <cassert>

#include "BaseBarrage.h"

namespace
{
	// デフォルトスピード
	// 敵用として下に降ってくるのがデフォルトとしている
	constexpr int kDefaultSpeedX = 0;
	constexpr int kDefaultSpeedY = 4;
}

BaseBarrage::BaseBarrage():
	m_handle(-1),
	m_graphSizeX(0),
	m_graphSizeY(0),
	m_posX(0),
	m_posY(0),
	m_speedX(kDefaultSpeedX),
	m_speedY(kDefaultSpeedY)
{
}

BaseBarrage::~BaseBarrage()
{
}

void BaseBarrage::Init()
{
}

void BaseBarrage::Update()
{
	// 位置の更新
	m_posX += m_speedX;
	m_posY += m_speedY;
}

void BaseBarrage::Draw() const
{
	DrawGraph(m_posX - m_graphSizeX / 2, m_posY - m_graphSizeY / 2
			, m_handle, true);
}

void BaseBarrage::SetHandle(int handle)
{
	m_handle = handle;

	assert(m_handle != -1);

	GetGraphSize(m_handle, &m_graphSizeX, &m_graphSizeY);
}

void BaseBarrage::SetPos(int x, int y)
{
	m_posX = x;
	m_posY = y;
}
