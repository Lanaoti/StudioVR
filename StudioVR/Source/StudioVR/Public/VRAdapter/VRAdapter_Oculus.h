// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#if BUILD_VR_OCULUS

#include "CoreMinimal.h"
#include "VRAdapter_Implementation.h"


class FVRAdapter_Oculus : public FVRAdapter_Implementation
{
public:
	// 构造/析构
	virtual void Construction(UObject* Outer, const class FObjectInitializer& ObjectInitializer) override;
	
	// 注册
	virtual void Register(AStudioVRPawn* NewPawn) override;
	virtual void Unregister() override;

	// Tick Function
	virtual void Tick(float DeltaTime) override;
	virtual bool PollControllerState(EControllerHand TrackingSource, FVector& Position, FRotator& Orientation) override;

	// 适配显示模型
	virtual void AdaptationDisplayComponent(class UAdaptiveControllerComponent* AdaptiveControllerComponent) override;
};

#endif // BUILD_VR_OCULUS

