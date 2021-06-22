#include "FGBuildableJumppad.h"

AFGBuildableJumppad::AFGBuildableJumppad() { }

void AFGBuildableJumppad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}

FVector AFGBuildableJumppad::GetLaunchDirection()
{
    return FVector();
}

void AFGBuildableJumppad::SetLaunchAngle(float Angle)
{
}

void AFGBuildableJumppad::SetTrajectoryVisibility(bool Visible)
{
}

FVector AFGBuildableJumppad::CalculateLaunchVelocity(const FVector& StartLocation, float Gravity) const
{
    return FVector();
}

const FTrajectoryData& AFGBuildableJumppad::ResimulateTrajectory()
{
    return mTrajectoryData;
}

FTrajectoryData AFGBuildableJumppad::SimulateTrajectory(UWorld* pWorld, const FVector& StartLocation, const FVector& LaunchVector, float GravityMultiplier, AFGBuildableJumppad* pJumpPad)
{
    return FTrajectoryData();
}

void AFGBuildableJumppad::Launch()
{
}

void AFGBuildableJumppad::BeginPlay()
{
}

void AFGBuildableJumppad::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}

float AFGBuildableJumppad::GetProductionProgress() const
{
    return 0.0f;
}

bool AFGBuildableJumppad::CanProduce_Implementation() const
{
    return false;
}

EProductionStatus AFGBuildableJumppad::GetProductionIndicatorStatus() const
{
    return EProductionStatus();
}

void AFGBuildableJumppad::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion)
{
}

void AFGBuildableJumppad::Factory_TickProducing(float dt)
{
}

void AFGBuildableJumppad::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AFGBuildableJumppad::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void AFGBuildableJumppad::OnRep_LaunchAngle()
{
}

void AFGBuildableJumppad::GenerateSplineMesh()
{
}

void AFGBuildableJumppad::DestroySplineMesh()
{
}

void AFGBuildableJumppad::DestroyVisualizer()
{
}

void AFGBuildableJumppad::UpdateDestinationLocation()
{
}

void AFGBuildableJumppad::ConstructSplineFromTrajectoryData()
{
}
