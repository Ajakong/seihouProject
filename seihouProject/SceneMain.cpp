// 開発中用define
// 開発中ここをいじくって自分のを機能させたり、
// どう動くかを確認していいが
// githubにあげるのだけは厳禁
// (1人までなら大丈夫だけど2人以上やったら競合で大変だからね)
// 使う際は_を消したら使えるようになるよ
#define _TAKASAKI
#define TASHIRO
#define _YOSIYAMA

#include <DxLib.h>

#include "SceneMain.h"
#include "Player.h"
#include "BaseBarrage.h"
#include "EnemyItem.h"
#include "EnemyMove.h"
#include "Haikei.h"

SceneMain::SceneMain():
	m_playerHandle(-1),
	m_enemyHnadle(-1),
	m_enemyItemHandle(-1),
	m_bgHandle(-1),
	m_barrageHandle(-1)
{
	m_playerHandle = LoadGraph("data/image/player.png");
	m_enemyHnadle = LoadGraph("data/image/enemy.png");
	m_enemyItemHandle = LoadGraph("data/image/enemyItem.png");
	m_bgHandle = LoadGraph("data/image/bg.png");
	m_barrageHandle = LoadGraph("data/image/barrage.png");

	m_pPlayer = new Player();
	m_pPlayer->SetHandle(m_playerHandle);
	m_pBaseBarrage = new BaseBarrage();
	m_pBaseBarrage->SetHandle(m_barrageHandle);
	m_pEnemyMove = new EnemyMove();
	m_pEnemyMove->SetHandle(m_enemyHnadle);
	m_pEnemyItem = new EnemyItem();
	m_pEnemyItem->SetHandle(m_enemyItemHandle);
	m_pBg = new Haikei();
	m_pBg->SetHandle(m_bgHandle);
}

SceneMain::~SceneMain()
{
	DeleteGraph(m_playerHandle);
	DeleteGraph(m_enemyHnadle);
	DeleteGraph(m_enemyItemHandle);
	DeleteGraph(m_bgHandle);
	DeleteGraph(m_barrageHandle);

	delete(m_pPlayer);
	m_pPlayer = nullptr;
	delete(m_pBaseBarrage);
	m_pBaseBarrage = nullptr;
	delete(m_pEnemyMove);
	m_pEnemyMove = nullptr;
	delete(m_pEnemyItem);
	m_pEnemyItem = nullptr;
	delete(m_pBg);
	m_pBg = nullptr;
}

void SceneMain::Init()
{
#ifdef TAKASAKI
	m_pPlayer->Init();
#endif

#ifdef TASHIRO
	m_pBaseBarrage->Init();
#endif

#ifdef YOSIYAMA
	m_pEnemyMove->Init();
	m_pEnemyItem->Init();
	m_pBg->Init();
#endif
}

void SceneMain::End()
{
}

void SceneMain::Update()
{
#ifdef TAKASAKI
	m_pPlayer->Update();
#endif

#ifdef TASHIRO
	m_pBaseBarrage->Update();
#endif

#ifdef YOSIYAMA
	m_pEnemyMove->Update();
	m_pEnemyItem->Update();
	m_pBg->Update();
#endif
}

void SceneMain::Draw() const
{
#ifdef TAKASAKI
	m_pPlayer->Draw();
#endif
#ifdef TASHIRO
	m_pBaseBarrage->Draw();
#endif
#ifdef YOSIYAMA
	m_pEnemyMove->Draw();
	m_pEnemyItem->Draw();
	m_pBg->Draw();
#endif
}
