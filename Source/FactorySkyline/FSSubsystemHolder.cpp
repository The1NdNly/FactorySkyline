// ILikeBanas


#include "FSSubsystemHolder.h"
#include "util/Logging.h"


void UFSSubsystemHolder::InitSubsystems() {
	SpawnSubsystem(FSSubsystem, AFSkyline::StaticClass(), TEXT("FSSubsystem"));
	FSSubsystem->Init();
}