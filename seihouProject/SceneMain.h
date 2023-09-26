#pragma once

class Player;
class BaseBarrage;
class EnemyItem;
class EnemyMove;
class Haikei;

class SceneMain
{
public:
	SceneMain();
	~SceneMain();

	void Init();
	void End();
	void Update();
	void Draw() const;

private:
	// �n���h��
	int m_playerHandle;
	int m_enemyHnadle;
	int m_enemyItemHandle;
	int m_bgHandle;
	int m_barrageHandle;

	// �N���X
	Player* m_pPlayer;
	BaseBarrage* m_pBaseBarrage;
	EnemyMove* m_pEnemyMove;
	EnemyItem* m_pEnemyItem;
	Haikei* m_pBg;
};

