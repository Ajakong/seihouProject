#include "Collider.h"

Collider::Collider(float radius) :
    m_sqRadius(radius * radius)
{
}

Collider::~Collider()
{
}

bool Collider::IsCol(Vec2 pos, float sqRadius)
{
    return m_pos.SqLength() + pos.SqLength() < m_sqRadius + sqRadius;
}
