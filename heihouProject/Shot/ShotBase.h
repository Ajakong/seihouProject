#pragma once
#include <Vec2.h>

class Player;

class ShotBase
{
public:
	enum ShotType
	{
		SHOT_TYPE_ENEMY,
		SHOT_TYPE_PLAYER,
	};

public:
	ShotBase(Player* pPlayer, ShotType type);
	virtual ~ShotBase();

	virtual void Update() = 0;
	virtual void Draw() const;

	/// <summary>
	/// �v���C���[�𒆐S�ɌŒ�̌����ւ̃X�^�[�g
	/// </summary>
	virtual void Start() {};
	/// <summary>
	/// �G�𒆐S�ɃX�^�[�g
	/// �Gor�v���C���[�𒆐S�Ƀ^�[�Q�b�g�֌������ăX�^�[�g
	/// </summary>
	/// <param name="pos">PLAYER : �^�[�Q�b�g�̒n�_, ENEMY : �X�^�[�g�n�_</param>
	virtual void Start(Vec2 pos) {};

	/// <summary>
	/// �n���h���ݒ�
	/// </summary>
	/// <param name="handle">�摜�n���h��</param>
	void SetHandle(int handle);
	/// <summary>
	/// �g���Ă��邩
	/// </summary>
	/// <returns>true : �g���Ă���, false : �g���Ă��Ȃ�</returns>
	bool IsUse() const { return m_isUse; }

	/// <summary>
	/// �e���v���C���[���˂��G���˂��𓾂�
	/// </summary>
	/// <returns>�e�̎��</returns>
	ShotType GetShotType() const { return m_type; }

protected:
	// �O���t�n���h��
	int m_handle;
	int m_graphWidth;
	int m_graphHeight;

	// �v���C���[�̏��������Ă���
	Player* m_pPlayer;

	// �e�̎�ނ̊m�F
	ShotType m_type;

	// �ꏊ
	Vec2 m_pos;
	// �ړ���
	Vec2 m_vec;

	// �g���Ă��邩�̊m�F
	bool m_isUse;
};

