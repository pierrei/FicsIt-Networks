﻿#pragma once

#include "CoreMinimal.h"
#include "FINWirelessAccessPointConnectionData.generated.h"

/**
 * Structure used to replicate AccessPointConnection data to clients
 */
USTRUCT(BlueprintType)
struct FICSITNETWORKSCIRCUIT_API FFINWirelessAccessPointConnectionData {
	GENERATED_BODY()

public:
	// Begin Cached Data
	UPROPERTY(BlueprintReadOnly)
	FText RepresentationText;

	UPROPERTY(BlueprintReadOnly)
	FVector RepresentationLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly)
	bool RadarTowerHasPower = false;
	// End Cached Data

	/** Connection from WAP to itself. Used only for display purposes. */
	UPROPERTY(BlueprintReadOnly)
	bool IsSelf = false;

	/** Identifies if Radar Tower is connected to a WAP */
	UPROPERTY(BlueprintReadOnly)
	bool IsConnected = false;

	/** Distance between Radar Tower and Target Radar Tower. Not used right now */
	UPROPERTY(BlueprintReadOnly)
	float Distance = 0.0f;

	/** If this a direct or repeated connection (with a Repeater Tower between source & target) */
	UPROPERTY(BlueprintReadOnly)
	bool IsRepeated = false;

	/** Is signal strong enough to reach this tower (even through repeaters)^ */
	UPROPERTY(BlueprintReadOnly)
	bool IsInRange = false;
};
