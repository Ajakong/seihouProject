#pragma once
#include "Vec2.h"

class Collider
{
public:
	Collider(float radius);
	~Collider();

	void SetCol(Vec2 pos) { m_pos = pos; }

	Vec2 GetCol() const { return m_pos; }
	float GetRadius() const { return m_sqRadius; }
	bool IsCol(Vec2 pos, float sqRadius);

private:
	// ’†S“_
	Vec2 m_pos;

	// ”¼Œa‚Ì“ñæ
	float m_sqRadius;
};

