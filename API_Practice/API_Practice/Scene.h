#pragma once
class Scene
{
public:
	Scene();
	virtual ~Scene(); //�ֻ��� Ŭ�����̱� ������ ���� �Ҹ��� ���(�޸� �� ����)

	virtual void Init() abstract; // ���� ���� �Լ�
	virtual void Update() abstract;
	virtual void Render(HDC hdc) abstract;
};

