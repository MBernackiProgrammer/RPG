#include "BasicCharacter.h"
#include "Mag.h"

void Mag::Attack(BasicCharacter* attackedCharacter)
{
	///////////////////////////////////////////
	//TODO
	// funkcje ataku, która bêdzie przyjmowa³a jako parametr
	// objekt klasy BasicCharacter
	///////////////////////////////////////////

	attackedCharacter->HP = attackedCharacter->HP - howManyHPMinus;
}

void Mag::Heal()
{
	///////////////////////////////////////////
	//TODO
	// Funkcja bêdzie dodawa³a hp z wzory 
	// HP = maxHP * LVL / 100
	///////////////////////////////////////////
}

void Mag::SuperPover()
{
	///////////////////////////////////////////
	//TODO
	// Funkcja bêdzie zadawa³a super HP wd 
	// Tego co wybierze gracz z listy superataków
	///////////////////////////////////////////
}

void Mag::Upgrate()
{
	///////////////////////////////////////////
	//TODO
	// Funkcja bêdzie ulepsza³a postaæ na pocz¹tek 
	// przez dodanie wartoœci do zmiennej LVL
	// a nastêpnie jaki superatak mo¿na odblokowaæ 
	///////////////////////////////////////////
}
