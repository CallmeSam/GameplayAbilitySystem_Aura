// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraEnemy.h"

#include "DynamicMesh/DynamicMesh3.h"

void AAuraEnemy::HighLightActor()
{
	bHighLight = true;
}

void AAuraEnemy::UnHighLightActor()
{
	bHighLight = false;
}
