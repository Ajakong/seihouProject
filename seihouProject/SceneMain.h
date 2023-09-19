#pragma once

class Player;
class BaseBarrage;

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
	int m_bgHandle;
	int m_barrageHandle;

	// �N���X
	Player* m_pPlayer;
	BaseBarrage* m_pBaseBarrage;
};

