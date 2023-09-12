#include "DxLib.h"
#include <cassert>

#include "BaseBarrage.h"

namespace
{
	constexpr int kBaseSpeedX = 4;
	constexpr int kBaseSpeedY = 4;
}

BaseBarrage::BaseBarrage():
	m_handle(-1),
	m_graphSizeX(0),
	m_graphSizeY(0),
	m_x(0),
	m_y(0),
	m_speedX(kBaseSpeedX),
	m_speedY(kBaseSpeedY)
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
	// à íuÇÃçXêV
	m_x += m_speedX;
	m_y += m_speedY;
}

void BaseBarrage::Draw() const
{
	DrawGraph(m_x - m_graphSizeX / 2, m_y - m_graphSizeY / 2
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
	m_x = x;
	m_y = y;
}
