#pragma once

/// �p�b�h�̏�Ԃ��擾����
class Pad
{
public:
	Pad();
	~Pad();


	/// �p�b�h�̍X�V���� 1�t���[����1��s��
	void Update();

	/// ������Ă��邩���擾
	bool IsPress(int key);
	/// �������u�Ԃ��擾
	bool IsTrigger(int key);
	/// �������u�Ԃ��擾
	bool IsRelase(int key);
	/// ���s�[�g���� (����͍������or�ύX����\�肠��)
	bool IsRepeat(int key, int& frame, int RepeatFrame);

private:
	// �O�̃t���[���̃p�b�h�����������
	int lastPad = 0;
	// �̃t���[���̃p�b�h�����������
	int nowPad = 0;
};