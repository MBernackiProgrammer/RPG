#pragma once
#include "BasicCharacter.h"

class Mag : public BasicCharacter
{
	int howManyHPMinus = 0;

	virtual void Attack(BasicCharacter* attackedCharacter);
	virtual void Heal();
	virtual void SuperPover();
	virtual void Upgrate();
};