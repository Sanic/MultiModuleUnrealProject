// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "FooActor.h"


// Sets default values
AFooActor::AFooActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFooActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BEGIN PLAY ACTOR"));
	int n = FStuffServant::getNumber();
	UE_LOG(LogTemp, Warning, TEXT("MAGIC NUMBER IS %d"), n);
	if (FStuffServant::IsAvailable()) {
		UE_LOG(LogTemp, Warning, TEXT("Servant Available"));
		FStuffServant s = FStuffServant::Get();
		UE_LOG(LogTemp, Warning, TEXT("MAGIC NUMBER IS %d"), s.x);
		UE_LOG(LogTemp, Warning, TEXT("MSC NUMBER IS %d"), s.msc.y);
		s.msc.doNothing();
		do_old_stuff(23);
		do_other_old_stuff(23);
		UE_LOG(LogTemp, Warning, TEXT("DEFINE IS %d"), OLD_C_STUFF_IS_GOOD);
		UE_LOG(LogTemp, Warning, TEXT("DEFINE IS %d"), OTHER_OLD_C_STUFF_IS_GOOD);
	} else {
		UE_LOG(LogTemp, Warning, TEXT("No Servant :("));

	}
}

// Called every frame
void AFooActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

