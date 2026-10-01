// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PROJETOEBAC_API AMyActor : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:

	UFUNCTION(BlueprintCallable, Category = "Funcoes")
	void IniciouSobreposicao(FString text);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float TempoExecucao; 
	float DeltaAltura;
	FVector NovaLocalizacao;
	
};
