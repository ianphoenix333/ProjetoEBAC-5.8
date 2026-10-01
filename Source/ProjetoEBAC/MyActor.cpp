// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TempoExecucao = 0.f;
	DeltaAltura = 0.f;
	NovaLocalizacao = FVector(0.f, 0.f, 0.f);
}

void AMyActor::IniciouSobreposicao(FString text)
{
	//UE_LOG(LogTemp, Warning, TEXT("FuncaoDisparada %s", text))
		UE_LOGFMT(LogTemp, Warning, "Texto de teste {text}", text);


}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	NovaLocalizacao = this->GetActorLocation();
	DeltaAltura = (FMath::Sin(TempoExecucao + DeltaTime) - FMath::Sin(TempoExecucao));
	NovaLocalizacao.Z += DeltaAltura * 20.f;
	TempoExecucao += DeltaTime;
	this->SetActorLocation(NovaLocalizacao);

}

