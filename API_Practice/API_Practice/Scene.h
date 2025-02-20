#pragma once
class Scene
{
public:
	Scene();
	virtual ~Scene(); //최상위 클래스이기 때문에 가상 소멸자 사용(메모리 릭 방지)

	virtual void Init() abstract; // 순수 가상 함수
	virtual void Update() abstract;
	virtual void Render(HDC hdc) abstract;
};

