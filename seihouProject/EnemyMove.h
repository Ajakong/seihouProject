#pragma once
#include "Vec2.h"

class EnemyMove
{
public:
	EnemyMove();
	~EnemyMove();

	void Init();
	void End();

	void Update();
	void Draw() const;

	//メンバ変数にアクセスする
	void SetHandle(int handle) { m_handle = handle; }


	
	//敵キャラクターをスタートさせる
	void Start();

	//敵のHP
	

private:
	int m_handle; //グラフィックのハンドル
	int m_graphWidth;
	int m_graphHeight;

	bool m_isExist; //存在しているかフラグ(使用中かどうか)

	//表示位置
	Vec2 m_pos;

	//移動量	//1フレーム当たりの移動ベクトルを入れる
	Vec2 m_vec;

};

