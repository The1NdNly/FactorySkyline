// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSBuildableOperator.h"
#include "FSPipelineSupportOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSPipelineSupportOperator : public UFSBuildableOperator
{
	GENERATED_BODY()
public:

	virtual AFGHologram* HologramCopy(FTransform& RelativeTransform);
	virtual AFGBuildable* CreateCopy(const FSTransformOperator& TransformOperator);
	virtual FSBuildableType GetType() const;
};
