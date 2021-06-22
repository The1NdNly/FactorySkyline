#include "FactorySkylineModule.h"
#include "FSkyline.h"
#include "mod/hooking.h"
#include "util/Logging.h"
#include "FSSubsystemHolder.h"
#include "FSCommandInstance.h"
#include "command/ChatCommandLibrary.h"
#include "FGGameInstance.h"
#include "FGNetworkLibrary.h"
#include "FGBuildableSubsystem.h"
#include "Buildables/FGBuildable.h"
#include "Buildables/FGBuildableConveyorBelt.h"
#include "Buildables/FGBuildableResourceSink.h"

bool CheckVersion(const FString& Version)
{
	FString Header;
	FString BuildVersion;
	Version.Split(TEXT("-"), &Header, &BuildVersion, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	int Ver = FCString::Atoi(*BuildVersion);
	//SML::Logging::info(Ver);
	return Ver >= 136408;
}

void FFactorySkylineModule::StartupModule() {
	
	if (!CheckVersion(UFGNetworkLibrary::GetLocalBuildVersion())) return;

	SML::Logging::info(TEXT("Loading Mod: Factory Skyline..."));
	FSubsystemInfoHolder::RegisterSubsystemHolder(UFSSubsystemHolder::StaticClass());

	SUBSCRIBE_METHOD_AFTER(UFGGameInstance::LoadComplete, [](UFGGameInstance* FGGameInstance, const float loadTime, const FString& mapName) {
		AFSkyline* Skyline = AFSkyline::Get(FGGameInstance);
		if (Skyline) {
			Skyline->InitFullSetup();
			AChatCommandSubsystem* Chat = AChatCommandSubsystem::Get(FGGameInstance);
			if (Chat) Chat->RegisterCommand(AFSCommandInstance::StaticClass());
		}
	});
	/*
	SUBSCRIBE_METHOD(AFGBuildableSubsystem::TickFactoryActors, [](CallScope <void(*)(AFGBuildableSubsystem*, float)>& Fun, AFGBuildableSubsystem* BuildableSubsystem, float dt) {
		AFSkyline* Skyline = AFSkyline::Get(BuildableSubsystem);
		if (Skyline && Skyline->FSCtrl) {
			Skyline->FSCtrl->onPreFactoryTick();
		}
	});*/
	
	SUBSCRIBE_METHOD(AFGBuildableResourceSink::Factory_CollectInput_Implementation, [](CallScope <void(*)(AFGBuildableResourceSink*)>& Fun, AFGBuildableResourceSink* ResourceSink) {
		AFSkyline* Skyline = AFSkyline::Get(ResourceSink);
		if (Skyline && Skyline->FSCtrl) {
			Skyline->FSCtrl->onPreResourceSinkTick(ResourceSink);
		}
		//SML::Logging::info(*ResourceSink->GetFullName());
	});
	
}

IMPLEMENT_GAME_MODULE(FFactorySkylineModule, FactorySkyline);