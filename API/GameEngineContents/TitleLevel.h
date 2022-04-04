#pragma once
#include "GameEngine/GameEngineLevel.h"

// ���� :
class Character;
class TitleLevel : public GameEngineLevel
{
public:
	// constrcuter destructer
	TitleLevel();
	~TitleLevel();

	// delete Function
	TitleLevel(const TitleLevel& _Other) = delete;
	TitleLevel(TitleLevel&& _Other) noexcept = delete;
	TitleLevel& operator=(const TitleLevel& _Other) = delete;
	TitleLevel& operator=(TitleLevel&& _Other) noexcept = delete;

protected:
	void Loading() override;
	void LevelChangeStart() override;
	void Update() override;
	void LevelChangeEnd() override;

private:
	
	GameEngineActor* BG_;
	GameEngineActor* Logo_;
	
};

