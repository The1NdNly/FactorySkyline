// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSBuildableOperator.h"
#include "FSBuildingOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSBuildingOperator : public UFSBuildableOperator
{
	GENERATED_BODY()
public:
	virtual FSBuildableType GetType() const;

};
