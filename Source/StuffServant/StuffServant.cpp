// Fill out your copyright notice in the Description page of Project Settings.

#include "StuffServant.h"

//IMPLEMENT_GAME_MODULE( FDefaultGameModuleImpl, MyProject );

IMPLEMENT_GAME_MODULE(FStuffServant, StuffServant);

FStuffServant::FStuffServant()
{
}

FStuffServant::~FStuffServant()
{
}

int FStuffServant::getNumber() {
	return 42;
}

void FStuffServant::StartupModule() {
	UE_LOG(LogTemp, Warning, TEXT("START MODULE STUFFSERVANT"));

}
void FStuffServant::ShutdownModule() {
	UE_LOG(LogTemp, Warning, TEXT("SHUTDOWN MODULE STUFFSERVANT"));
}