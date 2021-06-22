#include "FGPipelinePumpHologram.h"

FPumpHeadLiftLocationPath::FPumpHeadLiftLocationPath() {}

void FPumpHeadLiftLocationPath::SetData(const FPumpHeadLiftLocationPath& Other)
{
}

void FPumpHeadLiftLocationPath::SetData(const USplineComponent* pSpline, float StartOffset, float EndOffset, bool ReverseDirection)
{
}

TArray<FTransform> FPumpHeadLiftLocationPath::GetTransformsAtDistance(float Distance) const
{
	return TArray<FTransform>();
}

float FPumpHeadLiftLocationPath::GetLongestPathLength() const
{
	return 0.0f;
}

void FPumpHeadLiftLocationPath::Clear()
{
}

FPumpHeadLiftLocationPath& FPumpHeadLiftLocationPath::AddNextPath(const FPumpHeadLiftLocationPath& NextPath)
{
	return NextPaths[0];
}

FPumpHeadLiftLocationPath& FPumpHeadLiftLocationPath::AddNextPath(const USplineComponent* pSpline, float StartOffset, float EndOffset, bool ReverseDirection)
{
	return NextPaths[0];
}

AFGPipelinePumpHologram::AFGPipelinePumpHologram() {}

void AFGPipelinePumpHologram::Tick(float dt)
{
}

bool AFGPipelinePumpHologram::TrySnapToActor(const FHitResult& hitResult)
{
	return false;
}

float AFGPipelinePumpHologram::GetHeadLiftPathLength(const FPumpHeadLiftLocationPath& Path)
{
	return 0.0f;
}

TArray<FTransform> AFGPipelinePumpHologram::GetTransformsAtDistanceAlongPath(const FPumpHeadLiftLocationPath& Path, float Distance)
{
	return TArray<FTransform>();
}

TArray<FTransform> AFGPipelinePumpHologram::GetTransformsAtNormalizedDistanceAlongPath(const FPumpHeadLiftLocationPath& Path, float Distance)
{
	return TArray<FTransform>();
}

void AFGPipelinePumpHologram::FindHeadLiftSnappingLocations(AFGBuildablePipeline* StartPipeline, TMap<AFGBuildablePipeline*, float>& OutResults, TArray<FPumpHeadLiftLocationPath>& OutPaths) const
{
}

void AFGPipelinePumpHologram::FindLocationsWithHeightDifferenceOnPipeline(TMap<AFGBuildablePipeline*, float>& OutResults, FPumpHeadLiftLocationPath& OutPath, AFGBuildablePipeline* pPipeline, const FVector& StartLocation, const float HeightDifference, bool ReverseDirection, const int32 RecursionLevel, float TotalDistanceTraversed) const
{
}
