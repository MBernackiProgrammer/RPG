#include "BasicCharacter.h"
#include "Mag.h"

void Mag::Attack(BasicCharacter* attackedCharacter)
{
	///////////////////////////////////////////
	//TODO
	// funkcje ataku, kt�ra b�dzie przyjmowa�a jako parametr
	// objekt klasy BasicCharacter
	///////////////////////////////////////////

	attackedCharacter->HP = attackedCharacter->HP - howManyHPMinus;
}

void Mag::Heal()
{
	///////////////////////////////////////////
	//TODO
	// Funkcja b�dzie dodawa�a hp z wzory 
	// HP = maxHP * LVL / 100
	///////////////////////////////////////////
}

void Mag::SuperPover()
{
	///////////////////////////////////////////
	//TODO
	// Funkcja b�dzie zadawa�a super HP wd 
	// Tego co wybierze gracz z listy superatak�w
	///////////////////////////////////////////
}

void Mag::Upgrate()
{
	///////////////////////////////////////////
	//TODO
	// Funkcja b�dzie ulepsza�a posta� na pocz�tek 
	// przez dodanie warto�ci do zmiennej LVL
	// a nast�pnie jaki superatak mo�na odblokowa� 
	///////////////////////////////////////////
}
