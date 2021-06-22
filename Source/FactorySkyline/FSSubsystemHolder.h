// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "mod/ModSubsystems.h"
#include "FSkyline.h"
#include "FSSubsystemHolder.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API UFSSubsystemHolder : public UModSubsystemHolder
{
	GENERATED_BODY()
private:
	UPROPERTY()
	AFSkyline* FSSubsystem;
public:
	FORCEINLINE AFSkyline* GetMySubsystem() const { return FSSubsystem; }
	void InitSubsystems() override;
	
};
