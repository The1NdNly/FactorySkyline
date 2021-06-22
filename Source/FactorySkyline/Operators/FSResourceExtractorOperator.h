// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Operators/FSFactoryOperator.h"
#include "FSResourceExtractorOperator.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSResourceExtractorOperator : public UFSFactoryOperator
{
	GENERATED_BODY()
public:
	virtual AFGBuildable* CreateCopy(const FSTransformOperator& TransformOperator);
};
