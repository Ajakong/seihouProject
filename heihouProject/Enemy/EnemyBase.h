#pragma once
#include "Vec2.h"
class EnemyBase
{
public:
	EnemyBase();
	virtual ~EnemyBase();

	virtual void Init();
	virtual void Update();
	virtual void Draw();

	virtual void Start() = 0;

protected:
	//m_posを左上に,m_handleのグラフィックサイズを幅高さにした
	//当たり判定を取得する
	virtual void UpdateCollision();

protected: 
	int m_handle; //グラフィックのハンドル
	
	bool m_isExist; //存在するのかのフラグ(使用中かどうか)

	/*float m_posX*/
	/*float m_podY*/
	Vec2 m_pos;

	//移動量
	Vec2 m_vec;

	int m_graphWidth;
	int m_graphHeight;

};

