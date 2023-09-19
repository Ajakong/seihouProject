#include "SceneManager.h"
#include "SceneMain.h"
#include "Pad.h"

SceneManager::SceneManager()
{
	m_pMain = new SceneMain();
}

SceneManager::~SceneManager()
{
	delete(m_pMain);
	m_pMain = nullptr;
}

void SceneManager::Init()
{
	m_pMain->Init();
}

void SceneManager::End()
{
	m_pMain->End();
}

void SceneManager::Update()
{
	Pad::Update();

	m_pMain->Update();
}

void SceneManager::Draw() const
{
	m_pMain->Draw();
}
