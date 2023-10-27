#pragma once
#include <Vec2.h>

class Player;

class ShotBase
{
public:
	enum ShotType
	{
		SHOT_TYPE_ENEMY,
		SHOT_TYPE_PLAYER,
	};

public:
	ShotBase(Player* pPlayer, ShotType type);
	virtual ~ShotBase();

	virtual void Update() = 0;
	virtual void Draw() const;

	/// <summary>
	/// プレイヤーを中心に固定の向きへのスタート
	/// </summary>
	virtual void Start() {};
	/// <summary>
	/// 敵を中心にスタート
	/// 敵orプレイヤーを中心にターゲットへ向かってスタート
	/// </summary>
	/// <param name="pos">PLAYER : ターゲットの地点, ENEMY : スタート地点</param>
	virtual void Start(Vec2 pos) {};

	/// <summary>
	/// ハンドル設定
	/// </summary>
	/// <param name="handle">画像ハンドル</param>
	void SetHandle(int handle);
	/// <summary>
	/// 使われているか
	/// </summary>
	/// <returns>true : 使われている, false : 使われていない</returns>
	bool IsUse() const { return m_isUse; }

	/// <summary>
	/// 弾がプレイヤー発射か敵発射かを得る
	/// </summary>
	/// <returns>弾の種類</returns>
	ShotType GetShotType() const { return m_type; }

protected:
	// グラフハンドル
	int m_handle;
	int m_graphWidth;
	int m_graphHeight;

	// プレイヤーの情報を持っておく
	Player* m_pPlayer;

	// 弾の種類の確認
	ShotType m_type;

	// 場所
	Vec2 m_pos;
	// 移動量
	Vec2 m_vec;

	// 使われているかの確認
	bool m_isUse;
};

