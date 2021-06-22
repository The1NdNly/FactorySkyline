#include "FGJumpPadLauncherHologram.h"

AFGJumpPadLauncherHologram::AFGJumpPadLauncherHologram() {}

void AFGJumpPadLauncherHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}

void AFGJumpPadLauncherHologram::BeginPlay()
{
}

bool AFGJumpPadLauncherHologram::TrySnapToActor(const FHitResult& hitResult)
{
	return false;
}

void AFGJumpPadLauncherHologram::SetHologramLocationAndRotation(const FHitResult& hitResult)
{
}

void AFGJumpPadLauncherHologram::SetMaterial(UMaterialInterface* material)
{
}

void AFGJumpPadLauncherHologram::ScrollRotate(int32 delta, int32 step)
{
}

bool AFGJumpPadLauncherHologram::IsValidHitResult(const FHitResult& hitResult) const
{
	return false;
}

bool AFGJumpPadLauncherHologram::DoMultiStepPlacement(bool isInputFromARelease)
{
	return false;
}

void AFGJumpPadLauncherHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id)
{
}

int32 AFGJumpPadLauncherHologram::GetRotationStep() const
{
	return int32();
}

void AFGJumpPadLauncherHologram::ConfigureActor(AFGBuildable* inBuildable) const
{
}

void AFGJumpPadLauncherHologram::SimulateTrajectory()
{
}

void AFGJumpPadLauncherHologram::OnRep_LaunchAngle()
{
}
