#pragma once
#include "BasicCharacter.h"

class Rycerz : public BasicCharacter
{
	virtual void Attack(BasicCharacter*attackedCharacter);
	virtual void Heal();
	virtual void SuperPover();
	virtual void Upgrate();
};