#include "EnemyToPlayer.h"
#include "DxLib.h"
//*#include "Player.h"
#include <cassert>

namespace
{
	constexpr float kSpeed = 3.0f;
}

EnemyToPlayer::EnemyToPlayer():
	m_graphWidth(0),
	m_graphHeght(0)
{
	//m_pPlayerにはSceneMainですでにメモリを確保したPlayerが
	//どこに置かれているのか、の情報を入れておきたいのでここではメモリ確保をしない
}

EnemyToPlayer::~EnemyToPlayer()
{
	//m_pPlayerの確保開放はSceneMainが管理するので
	//同様に開放も行わない
}
void EnemyToPlayer::Update()
{
	//存在しない敵の処理はしない
	if (!m_isExist) return;

	m_pos += m_vec;

	//当たり判定の更新
	//UpdateCollision();

	//画面外に出たら存在を消す
	int width;
	int height;
	GetGraphSize(m_handle, &width, &height);

	//上からきて中心で止まる前提
	if (m_pos.y <= 0.0f - m_graphWidth)
	{
		m_isExist = false;
	}

	//画面上に移動しているが画面上から完全に出きった敵を消す
//*	if ((m_vec.y < 0.0f) && (m_pos.x > Game::kScreenWidth) / 2)
//*	{
//*		m_isExist = false
//*	}
}

void EnemyToPlayer::Start()
{
	m_isExist = true;

	int width = 0;
	int height = 0;
	GetGraphSize(m_handle, &width, &height);

//*	m_pos.x = static_cast<float>(Game::kScreenWidth / 2); //画面中央から入ってくる
	m_pos.y = static_cast<float>(-height / 2); //画面上から入ってくる

	//画面中央を経由して画面買いまで一定速度で移動する
	//コンストラクタでnullptrが設定されて、それ以降変更されていなければ止まる
//*	assert(m_pPlayer);

//*	const Vec2 target = m_pPlayer->GetPos();

	//敵の初期位置からターゲット位置に向かうベクトルを作成する
	//視点から羽刕店に向かうベクトルを求める場合、終点の座標-視点の座標で求める
//*	Vec2 toTarget = target - m_pos;

	//ベクトルの長さをkSpeedにしてやる
	//ベクトルの正規化　長さを1にする
//*	toTarget.normalize();

	//kSpeedでかける

//*	m_vec = toTarget * kSpeed;
}
