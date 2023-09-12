#include "DxLib.h"
#include <cassert>

#include "BaseBarrage.h"

BaseBarrage::BaseBarrage():
	m_handle(-1),
	m_x(0),
	m_y(0),
	m_moveX(0),
	m_moveY(0)
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
	// ˆÊ’u‚ÌXV
}

void BaseBarrage::Draw() const
{
	DrawGraph(m_x, m_y, m_handle, true);
}
