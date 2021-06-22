// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSTrainPlatformOperator.h"
#include "FSTrainStationOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSTrainStationOperator : public UFSTrainPlatformOperator
{
	GENERATED_BODY()
public:

	virtual void ApplySettingsTo(AFGBuildable* Buildable);
	
};
