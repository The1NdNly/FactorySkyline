#include "FGLadderHologram.h"

AFGLadderHologram::AFGLadderHologram() {}

void AFGLadderHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}

void AFGLadderHologram::BeginPlay()
{
}

bool AFGLadderHologram::IsValidHitResult(const FHitResult& hitResult) const
{
    return false;
}

void AFGLadderHologram::SetHologramLocationAndRotation(const FHitResult& hitResult)
{
}

bool AFGLadderHologram::DoMultiStepPlacement(bool isInputFromARelease)
{
    return false;
}

bool AFGLadderHologram::TrySnapToActor(const FHitResult& hitResult)
{
    return false;
}

void AFGLadderHologram::SetMaterial(UMaterialInterface* material)
{
}

int32 AFGLadderHologram::GetBaseCostMultiplier() const
{
    return int32();
}

void AFGLadderHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id)
{
}

void AFGLadderHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram)
{
}

void AFGLadderHologram::ConfigureActor(AFGBuildable* inBuildable) const
{
}

void AFGLadderHologram::CheckValidFloor()
{
}

void AFGLadderHologram::OnRep_TargetSegmentHeight()
{
}

void AFGLadderHologram::UpdateClearance()
{
}
