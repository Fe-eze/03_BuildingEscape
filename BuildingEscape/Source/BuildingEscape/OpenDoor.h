// Copyright Fe-eze Anyafulu 2017

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor();

private:
	UPROPERTY(VisibleAnywhere)
	float OpenAngle = 90.0f;
	
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	//UPROPERTY(EditAnywhere)
	AActor* ActorThatOpens; // Remember that pawn inherits from actor
};
