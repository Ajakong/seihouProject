#include "Player.h"
#include"Dxlib.h"
#include"Game.h"
#include"Vec2.h"

namespace
{
	constexpr float kSpeed = 3.0f;

}

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
	m_pos.x = Game::kScreenWidth / 4;
	m_pos.y = Game::kScreenHeight / 2 + 100;
}

void Player::End()
{
}

void Player::Update()
{
	Vec2 move{ 0.0f,0.0f };

	//padの十字キーを使用してプレイヤーを移動させる
	int pad = GetJoypadInputState(DX_INPUT_KEY_PAD1);



	if (CheckHitKey(KEY_INPUT_W) == 1) move.y -= kSpeed;
	if (CheckHitKey(KEY_INPUT_S) == 1) move.y += kSpeed;
	if (CheckHitKey(KEY_INPUT_D) == 1) move.x += kSpeed;
	if (CheckHitKey(KEY_INPUT_A) == 1) move.x -= kSpeed;

	//ベクトルの正規化
	move.Normalize();

	move *= kSpeed;

	m_pos += move;

	if (m_pos.x > Game::kScreenWidth / 2 - 30)
	{
		m_pos.x = Game::kScreenWidth / 2 - 30;
	}
	if (m_pos.x < 0)
	{
		m_pos.x = 0;
	}
	if (m_pos.y < (Game::kScreenHeight / 4))
	{
		m_pos.y = (Game::kScreenHeight / 4);
	}
	if (m_pos.y > Game::kScreenHeight - 30)
	{
		m_pos.y = Game::kScreenHeight - 30;
	}
	if (CheckHitKey(KEY_INPUT_SPACE) == 1 && m_bombNum != 0)
	{
		//Bomber!!
		for (int i = 0; i < 40; i++) if (m_pHp < 60) m_pHp++;

	}


}

void Player::Draw()
{
	DrawBox(m_pos.x, m_pos.y, m_pos.x + 30, m_pos.y + 30, GetColor(255, 255, 255), true);
}

float Player::GetPosX()
{
	return m_pos.x + 15;
}

float Player::GetPosY()
{
	return m_pos.y + 15;
}





float Player::GetRadius()
{
	return 0.0f;
}

void Player::SetHandle(int handle)
{

}
