﻿#include "Reflection/Source/Static/FIRTrackGraph.h"
#include "FGRailroadVehicle.h"
#include "FGTrain.h"
#include "Buildables/FGBuildableTrainPlatform.h"

int FFIRTrackGraph::GetTrackID(UObject* obj) {
	if (AFGBuildableTrainPlatform* platform = Cast<AFGBuildableTrainPlatform>(obj)) {
		return platform->GetTrackGraphID();
	}
	if (AFGRailroadVehicle* vehicle = Cast<AFGRailroadVehicle>(obj)) {
		return vehicle->GetTrackGraphID();
	}
	if (AFGTrain* train = Cast<AFGTrain>(obj)) {
		return train->GetTrackGraphID();
	}
	return -1;
}

bool FFIRTrackGraph::IsValid() {
	return GetTrackID(*Trace) >= 0;
}
