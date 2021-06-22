// ILikeBanas


#include "FSCommandInstance.h"
#include "util/Logging.h"
#include "FSkyline.h"
#include "FSBuilder.h"
#include "FSController.h"
#include "UI/FGGameUI.h"
#include "InputCoreTypes.h"


AFSCommandInstance::AFSCommandInstance() {
	ModId = TEXT("Factory Skyline");
	CommandName = TEXT("Skyline");
	Usage = TEXT("/Skyline - Factory Skyline");
}

static void ListAllActor(UCommandSender* Sender)
{
	UWorld* World = Sender->GetWorld();
	for (TActorIterator<AActor>It(World); It; ++It) {
		AActor* Actor = *It;
		SML::Logging::info(*Actor->GetFullName());

	}
}

static void ListAllUserWidgetr(UCommandSender* Sender)
{
	UWorld* World = Sender->GetWorld();
	for (TObjectIterator<UUserWidget>It; It; ++It) {
		UUserWidget* Widget = *It;
		SML::Logging::info(*Widget->GetFullName());
		SML::Logging::info(*Widget->GetName());

	}
}


EExecutionStatus AFSCommandInstance::ExecuteCommand_Implementation(UCommandSender* Sender, const TArray<FString>& Arguments, const FString& Label) {

	AFSkyline* FSkyline = AFSkyline::Get(this);
	FSkyline->SkylineUI->KeySettingsWidget->Start();
	Sender->SendChatMessage(TEXT("Start Key Settings"));
	return EExecutionStatus::COMPLETED;
}