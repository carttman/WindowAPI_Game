#pragma once
#include "Scene.h"

class GameScene : public Scene
{
public:

	GameScene();
	virtual ~GameScene() override;

	virtual void Init() override; // 순수 가상 함수
	virtual void Update() override;
	virtual void Render(HDC hdc) override;
};

