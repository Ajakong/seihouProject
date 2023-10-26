#pragma once
#include "EnemyBase.h"
#include "Vec2.h"

class Player;


class EnemyToPlayer
{
public:
	EnemyToPlayer();
	virtual ~EnemyToPlayer();

	virtual void Update();

	//メンバ変数にアクセスする
	//void SetPlayer(Player* player) { m_pPlayer = pPlayer; }

	//敵キャラクターをスタートさせる
	virtual void Start();

private:
	int m_handle; //グラフィックのハンドル
	bool m_isExist; //存在するかフラグ(使用中かどうか)
	//Player* m_pPlayer;

	//表示位置
	Vec2 m_pos;
	//移動量
	Vec2 m_vec;

	int m_graphWidth;
	int m_graphHeght;


};

