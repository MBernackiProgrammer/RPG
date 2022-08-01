#pragma once

class BasicCharacter
{
public:
	//Variables 
	float HP;
	int LVL;
	int roundDelay;
	int maxHP;

	//Functions 
	virtual void Attack(BasicCharacter* attackedCharacter) = 0;
	virtual void Heal() = 0;
	virtual void SuperPover() = 0;
	virtual void Upgrate() = 0;
};
