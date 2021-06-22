// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSBuildableOperator.h"
#include "FSConveyorPoleOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSConveyorPoleOperator : public UFSBuildableOperator
{
	GENERATED_BODY()
public:

	virtual AFGHologram* HologramCopy(FTransform& RelativeTransform);
	virtual AFGBuildable* CreateCopy(const FSTransformOperator& TransformOperator);
	virtual FSBuildableType GetType() const;
};
