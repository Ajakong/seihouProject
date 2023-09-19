#include "SceneMain.h"
#include "Player.h"
#include "BaseBarrage.h"

SceneMain::SceneMain():
	m_playerHandle(-1),
	m_enemyHnadle(-1),
	m_bgHandle(-1),
	m_barrageHandle(-1)
{
	// todo :m_pPlayerの以下略
	m_pBaseBarrage = new BaseBarrage();
	m_pBaseBarrage->SetHandle(m_barrageHandle);
}

SceneMain::~SceneMain()
{
	// todo :m_pPlayerをここでデストラクタ
	delete(m_pBaseBarrage);
	m_pBaseBarrage = nullptr;
}

void SceneMain::Init()
{
	// todo :m_pPlayerの以下略
	m_pBaseBarrage->Init();
}

void SceneMain::End()
{
}

void SceneMain::Update()
{
	// todo :m_pPlayerの以下略
	m_pBaseBarrage->Update();
}

void SceneMain::Draw() const
{
	// todo :m_pPlayerの以下略
	m_pBaseBarrage->Draw();
}
