#include "Player.h"
#include"Dxlib.h"
#include"Game.h"

Player::Player() :
	m_handle(0),
	m_posX(0),
	m_posY(0)
{

}
Player::~Player()
{
}

void Player::Init()
{

}

void Player::End()
{
}

void Player::Update()
{

	//padの十字キーを使用してプレイヤーを移動させる
	int pad = GetJoypadInputState(DX_INPUT_KEY_PAD1);


	if (CheckHitKey(KEY_INPUT_UP) == 1) m_posX -= 3;
	if (CheckHitKey(KEY_INPUT_DOWN) == 1) m_posX += 3;
	if (CheckHitKey(KEY_INPUT_RIGHT) == 1) m_posY += 3;
	if (CheckHitKey(KEY_INPUT_LEFT) == 1) m_posY -= 3;
}

void Player::Draw()
{
	DrawCircle(m_posX, m_posY, m_posX + 5, m_posY + 5, GetColor(255, 255, 255));
}
