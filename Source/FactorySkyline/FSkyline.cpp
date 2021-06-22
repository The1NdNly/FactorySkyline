// ILikeBanas


#include "FSkyline.h"
#include "UI/FSkylineUI.h"
#include "FSSubsystemHolder.h"
#include "mod/ModSubsystems.h"
#include "util/Logging.h"
#include "Equipment/FGBuildGun.h"
#include "FGBuildableSubsystem.h"
#include "Buildables/FGBuildable.h"
#include "Buildables/FGBuildableManufacturer.h"
#include "Buildables/FGBuildableFoundation.h"
#include "Hologram/FGHologram.h"
#include "Hologram/FGBuildableHologram.h"
#include "Hologram/FGFactoryHologram.h"
#include "Hologram/FGFoundationHologram.h"
#include "FGPlayerController.h"
#include "FGFactoryLegsComponent.h"
#include "FGInputLibrary.h"
#include "FSBuilder.h"
#include "FSSelection.h"
#include "FSController.h"
#include "Operators/FSBuildableOperator.h"
#include "FGOutlineComponent.h"
#include "UI/FGGameUI.h"
#include "UI/FGPopupWidget.h"
#include "UI/FGInteractWidget.h"
#include "UI/FGVirtualCursorFunctionLibrary.h"


AFSkyline* AFSkyline::Get(UObject* WorldContext) {
	UFSSubsystemHolder* Holder = GetSubsystemHolder<UFSSubsystemHolder>(WorldContext);
	if (Holder == nullptr)
		return nullptr;
	return Holder->GetMySubsystem();
}

void AFSkyline::Init()
{
}

void AFSkyline::InitFullSetup()
{
	this->World = this->GetWorld();
	this->WorldSettings = Cast<AFGWorldSettings>(World->GetWorldSettings());

	this->FGController = World->GetFirstPlayerController<AFGPlayerController>();
	this->HUD = Cast<AFGHUD>(this->FGController->GetHUD());
	this->GameUI = this->HUD->GetGameUI();

	if (!this->FSCtrl) this->FSCtrl = SpawnHiddenActor<AFSController>();
	this->Builder = SpawnHiddenActor<AFSBuilder>();

	this->Select = NewObject<UFSSelection>(this);
	
	this->OperatorFactory = NewObject<UFSOperatorFactory>(this);
	this->SplineHologramFactory = NewObject<UFSSplineHologramFactory>(this);
	this->BuildableService = NewObject<UFSBuildableService>(this);
	this->ConnectSelectService = NewObject<UFSConnectSelectService>(this);
	this->RectSelectService = NewObject<UFSRectSelectService>(this);
	this->AdaptiveUtil = NewObject<UFSAdaptiveUtil>(this);

	TSubclassOf<UUserWidget> WidgetClass = LoadClass<UUserWidget>(this, TEXT("/Game/FactorySkyline/Widget_FSkylineUI.Widget_FSkylineUI_C"));
	this->SkylineUI = Cast<UFSkylineUI>(CreateWidget<UUserWidget>(World, WidgetClass));
	
	this->FSCtrl->Init(); //need first
	this->Builder->Init();
	this->Select->Init();
	this->SkylineUI->Init(World);
	this->OperatorFactory->Init();
	this->SplineHologramFactory->Init();
	this->BuildableService->Init();
	this->ConnectSelectService->Init();
	this->RectSelectService->Init();
	this->AdaptiveUtil->Init();

	IsFullLoaded = true;
}

static void ListAllUserWidgetr(UWorld* World)
{
	for (TObjectIterator<UUserWidget>It; It; ++It) {
		UUserWidget* Widget = *It;
		SML::Logging::info(*Widget->GetFullName());

	}
}

template <class T>
T* AFSkyline::SpawnHiddenActor()
{
	FTransform Transform(FRotator::ZeroRotator, FVector::DownVector * 1e6);
	T* Result = World->SpawnActor<T>(FVector::DownVector * 1e6, FRotator::ZeroRotator);
	Result->SetActorHiddenInGame(true);
	Result->FinishSpawning(Transform);
	return Result;
}
