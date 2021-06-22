#include "FGEventSubsystem.h"

AFGEventSubsystem::AFGEventSubsystem()
{

}

void AFGEventSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}

AFGEventSubsystem* AFGEventSubsystem::GetEventSubsystem(UObject* worldContext)
{
    return nullptr;
}

TArray<EEvents> AFGEventSubsystem::GetCurrentEvents()
{
    return TArray<EEvents>();
}
