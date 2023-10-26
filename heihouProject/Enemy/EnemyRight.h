#pragma once
#include "EnemyBase.h"
class EnemyRight
{
public:
	EnemyRight();
	virtual ~EnemyRight();

	virtual void Update();

	bool isExist() const { return m_isExist; }

	//敵キャラクターをスタートさせる
	virtual void Start();

private:
	int m_handle; //グラフィックのハンドル

	bool m_isExist; //存在するかしないかのフラグ

	Vec2 m_pos;

	//移動量
	Vec2 m_vec;

	int m_graphWidth;
	int m_grpahHeight;

};

