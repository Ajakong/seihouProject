#include <DxLib.h>
#include <cassert>
#include "ShotBase.h"

ShotBase::ShotBase() :
	m_handle(-1),
	m_graphWidth(0),
	m_graphHeight(0),
	m_isUse(false)
{
}

ShotBase::~ShotBase()
{
}

void ShotBase::Draw() const
{
	if (!m_isUse) return;

	DrawRotaGraph(m_pos.x, m_pos.y, 
		1.0, 0.0,
		m_handle, true);
}

void ShotBase::SetHandle(int handle)
{
	m_handle = handle;
	GetGraphSize(m_handle, &m_graphWidth, &m_graphHeight);
}
