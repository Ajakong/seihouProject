#pragma once
#include "Scene.h"

class GameScene : public Scene
{
public :
	GameScene(SceneManager& manager);
	~GameScene();

	virtual void Update(Pad& input);
	virtual void Draw();

private:
	int m_handle = 0;
};

