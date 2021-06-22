// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSPipelineSupportOperator.h"
#include "FSPipelineSupportStkOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSPipelineSupportStkOperator : public UFSPipelineSupportOperator
{
	GENERATED_BODY()
public:
	virtual void GetSelectConnectList(AFGBuildable* Buildable, TArray<TWeakObjectPtr<AFGBuildable> >& List) const;
};
