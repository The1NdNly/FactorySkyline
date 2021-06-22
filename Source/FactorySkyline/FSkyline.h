// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "FGSubsystem.h"
#include "FGPlayerController.h"
#include "FGWorldSettings.h"
#include "FSBuilder.h"
#include "FSSelection.h"
#include "FSBuildableService.h"
#include "FSSelectService.h"
#include "FSAdaptiveUtil.h"
#include "UI/FGGameUI.h"
#include "UI/FGPopupWidget.h"
#include "UI/FSkylineUI.h"
#include "FGHUD.h"
#include "FSController.h"
#include "Operators/FSBuildableOperator.h"
#include "util/Logging.h"
#include "FSkyline.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSKYLINE_API AFSkyline : public AFGSubsystem, public IFGSaveInterface
{
	GENERATED_BODY()
public:
	
	void Init();

	UFUNCTION(BlueprintPure)
	static AFSkyline* Get(UObject* WorldContext);

	void InitFullSetup();

	virtual bool ShouldSave_Implementation() const override { return FSCtrl && FSCtrl->Etc ? !FSCtrl->Etc->GetBool("DontSaveAnything") : false; }


	UWorld* World = nullptr;
	AFGWorldSettings* WorldSettings = nullptr;
	AFGPlayerController* FGController = nullptr;
	UFGGameUI* GameUI = nullptr;
	AFGHUD* HUD = nullptr;

	bool IsFullLoaded = false;

	UPROPERTY()
	AFSBuilder* Builder = nullptr;

	UPROPERTY()
	UFSSelection* Select = nullptr;

	UPROPERTY()
	UFSkylineUI* SkylineUI = nullptr;

	UPROPERTY(SaveGame)
	AFSController* FSCtrl = nullptr;

	UPROPERTY()
	UFSOperatorFactory* OperatorFactory = nullptr;

	UPROPERTY()
	UFSSplineHologramFactory* SplineHologramFactory = nullptr;

	UPROPERTY()
	UFSBuildableService* BuildableService = nullptr;

	UPROPERTY()
	UFSConnectSelectService* ConnectSelectService = nullptr;

	UPROPERTY()
	UFSRectSelectService* RectSelectService = nullptr;

	UPROPERTY()
	UFSAdaptiveUtil* AdaptiveUtil = nullptr;

private:
	template <class T>
	T* SpawnHiddenActor();
};
