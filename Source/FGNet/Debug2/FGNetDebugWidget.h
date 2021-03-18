#pragma once

#include "Blueprint/UserWidget.h"
#include "FGNetDebugWidget.generated.h"

USTRUCT(BlueprintType)
struct FFGBlueprintNetworkSimulationSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (DisplayName = "Minimum Latency", ClampMin = "0", ClampMax = "5000"))
	int32 MinLatency = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (DisplayName = "Maximum Latency", ClampMin = "0", ClampMax = "5000"))
	int32 MaxLatency = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (ClampMin = "0", ClampMax = "100"))
	int32 PacketLossPercentage = 0;
};

//USTRUCT(BlueprintType)
//struct FFGBlueprintNetworkSimulationSettingsText
//{
//	GENERATED_BODY()
//public:
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (DisplayName = "Minimum Latency")
//	int32 MinLatency = 0;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings", meta = (DisplayName = "Maximum Latency")
//	int32 MaxLatency = 0;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network Settings")
//	int32 PacketLossPercentage = 0;
//};
//
//UCLASS()
//class FGNET_API UFGNetDebugWidget : public UUserWidget
//{
//	GENERATED_BODY()
//public:
//	UFUNCTION(BlueprintCallable, Category = Widget)
//	void UpdateNetworkSimulationSettings(const FFGBlueprintNetworkSimulationSettingsText& Packets);
//};