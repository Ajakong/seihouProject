// 開発中用define
// 開発中ここをいじくって自分のを機能させたり、
// どう動くかを確認していいが
// githubにあげるのだけは厳禁
// (1人までなら大丈夫だけど2人以上やったら競合で大変だからね)
// 使う際は_を消したら使えるようになるよ
#define _TAKASAKI
#define _TASHIRO
#define _YOSIYAMA

#include "SceneMain.h"
#include "Player.h"
#include "BaseBarrage.h"

SceneMain::SceneMain():
	m_playerHandle(-1),
	m_enemyHnadle(-1),
	m_bgHandle(-1),
	m_barrageHandle(-1)
{
	// 高崎の処理
#ifdef TAKASAKI
	// todo :m_pPlayerの以下略
	m_pBaseBarrage = new BaseBarrage();
#endif

#ifdef TASHIRO
	m_pBaseBarrage->SetHandle(m_barrageHandle);
#endif

#ifdef YOSIYAMA
#endif
}

SceneMain::~SceneMain()
{
#ifdef TAKASAKI
	// todo :m_pPlayerをここでデストラクタ
#endif

#ifdef TASHIRO
	delete(m_pBaseBarrage);
	m_pBaseBarrage = nullptr;
#endif

#ifdef YOSIYAMA
#endif
}

void SceneMain::Init()
{
#ifdef TAKASAKI
	// todo :m_pPlayerの以下略
#endif

#ifdef TASHIRO
	m_pBaseBarrage->Init();
#endif

#ifdef YOSIYAMA
#endif
}

void SceneMain::End()
{
}

void SceneMain::Update()
{
#ifdef TAKASAKI
	// todo :m_pPlayerの以下略
#endif

#ifdef TASHIRO
	m_pBaseBarrage->Update();
#endif

#ifdef YOSIYAMA
#endif
}

void SceneMain::Draw() const
{
#ifdef TAKASAKI
	// todo :m_pPlayerの以下略
#endif
#ifdef TASHIRO
	m_pBaseBarrage->Draw();
#endif
#ifdef YOSIYAMA
#endif
}
