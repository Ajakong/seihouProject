#include "Player.h"
#include"Dxlib.h"
#include"Game.h"
#include"Vec2.h"

Player::Player() :
	m_handle(0),
	m_pHp(100),
	m_bombNum(3)
{

}
Player::~Player()
{
}

void Player::Init()
{
	m_pos.x = Game::kScreenWidth/4;
	m_pos.y = Game::kScreenHeight/2+100;
}

void Player::End()
{
}

void Player::Update()
{

	//padの十字キーを使用してプレイヤーを移動させる
	int pad = GetJoypadInputState(DX_INPUT_KEY_PAD1);


	if (CheckHitKey(KEY_INPUT_W) == 1) m_pos.y -= 3;
	if (CheckHitKey(KEY_INPUT_S) == 1) m_pos.y += 3;
	if (CheckHitKey(KEY_INPUT_D) == 1) m_pos.x += 3;
	if (CheckHitKey(KEY_INPUT_A) == 1) m_pos.x -= 3;

	if (m_pos.x > Game::kScreenWidth / 2-25)
	{
		m_pos.x = Game::kScreenWidth / 2-25;
	}
	if (m_pos.x < 0)
	{
		m_pos.x = 0;
	}
	if (m_pos.y < (Game::kScreenHeight / 4))
	{
		m_pos.y = (Game::kScreenHeight / 4);
	}
	if (m_pos.y > Game::kScreenHeight-25)
	{
		m_pos.y = Game::kScreenHeight - 25;
	}
	if (CheckHitKey(KEY_INPUT_SPACE) == 1&&m_bombNum!=0)
	{
		//Bomber!!
		for (int i = 0; i < 40; i++) if(m_pHp<60) m_pHp++;
		
	}
	

}

void Player::Draw()
{
	DrawBox(m_pos.x, m_pos.y, m_pos.x + 25, m_pos.y + 25, GetColor(255, 255, 255),true);
}

float Player::getradius()
{
	return 0.0f;
}

void Player::SetHandle(int handle)
{

}
