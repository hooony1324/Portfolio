#pragma once
#include "Enemy.h"
#include <vector>
// 설명 :
class GameEngineCollision;
class Mud : public Enemy
{
public:
	// constrcuter destructer
	Mud();
	~Mud();

	// delete Function
	Mud(const Mud& _Other) = delete;
	Mud(Mud&& _Other) noexcept = delete;
	Mud& operator=(const Mud& _Other) = delete;
	Mud& operator=(Mud&& _Other) noexcept = delete;

private:
	void Start() override;
	void Update() override;
	void Render() override;

	// 기본 정보
	float Speed_;
	int Hp_;


	// 피격
	void Hit();
	GameEngineRenderer* Mud_;
	GameEngineCollision* MudCol_;
	GameEngineCollision* AttackCheck_;


	// 서로 밀어내기
	void BlockOther();
	GameEngineCollision* OtherBlockUp_;
	GameEngineCollision* OtherBlockDown_;
	GameEngineCollision* OtherBlockLeft_;
	GameEngineCollision* OtherBlockRight_;
	std::vector<GameEngineCollision*> Others_;


	GameEngineRenderer* Hp_BarRed_;
	float4 Hp_BarSize_;
};

