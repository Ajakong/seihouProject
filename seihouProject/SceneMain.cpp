// �J�����pdefine
// �J�������������������Ď����̂��@�\��������A
// �ǂ����������m�F���Ă�����
// github�ɂ�����̂����͌���
// (1�l�܂łȂ���v������2�l�ȏ������狣���ő�ς������)
// �g���ۂ�_����������g����悤�ɂȂ��
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
	// ����̏���
#ifdef TAKASAKI
	// todo :m_pPlayer�̈ȉ���
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
	// todo :m_pPlayer�������Ńf�X�g���N�^
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
	// todo :m_pPlayer�̈ȉ���
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
	// todo :m_pPlayer�̈ȉ���
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
	// todo :m_pPlayer�̈ȉ���
#endif
#ifdef TASHIRO
	m_pBaseBarrage->Draw();
#endif
#ifdef YOSIYAMA
#endif
}
