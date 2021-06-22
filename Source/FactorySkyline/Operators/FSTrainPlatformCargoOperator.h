// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSTrainPlatformOperator.h"
#include "Operators/FSBuildableOperator.h"
#include "FSTrainPlatformCargoOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSTrainPlatformCargoOperator : public UFSTrainPlatformOperator
{
	GENERATED_BODY()
public:

	virtual void ApplySettingsTo(AFGBuildable* Buildable);
};
