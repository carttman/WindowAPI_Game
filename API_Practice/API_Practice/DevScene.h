#pragma once
#include "Scene.h"

class DevScene : public Scene
{
public:
	DevScene();
	virtual ~DevScene() override;

	virtual void Init() override; // 순수 가상 함수
	virtual void Update() override;
	virtual void Render(HDC hdc) override;

public:
	Pos _playerPos = {300, 300};
	float _speed = 1000;
};

