#include <iostream>
#include <string>
#include <stdio.h>
#include "StartMenu.h"
using namespace std;

void StartMenu::LoadMenu()
{
	//Print Menu
	cout << "Welcome in Big RPG" << endl;
	cout << "1. Start new game" << endl;
	cout << "2. Continue game" << endl;
	cout << "3. Quit game" << endl;

	for (;;)
	{
		int selectedOption;
		cin >> selectedOption;

		switch (selectedOption)
		{
		case 1:
			this->NewGame();
			break;

		case 2:
			this->ContinueGame();
			break;

		case 3:
			this->QuitGame();
			break;
		default:
			break;
		}

	}
	
}

void StartMenu::NewGame()
{
	////////////////////////////////////////////////
	// TODO
	// Poproszenie o nazw� sava
	// Stworzenie pliku zapisu - stworzenie klasy zapisu 
	// Do��czenie do gry - stworzenie klasy gry 
	////////////////////////////////////////////////

	//Zmienne lokalne 
	string SaveName;
	int maxPlayers;

	cout << "Podaj nazwe sava ktory chcesz utworzyc" << endl;
	cin >> SaveName;

	//je�li nie istnieje utw�rz ten save

	//Ilo�� graczy 
	cout << "Ile graczy bedzie gralo" << endl;
	cin >> maxPlayers;

	PlayersInfo* PlayersInformation = new PlayersInfo[maxPlayers];

	for (int i = 0; i < maxPlayers; i++)
	{
		int selectedOption;
		string characterName;
		cout << "Wybierz posta�, do wyboru s� :" << endl;
		cout << "1. Mag" << endl;
		cout << "2. Rycerz" << endl;
		
		cin >> selectedOption;

		switch (selectedOption)
		{
		case 1:

			break;

		case 2:
			break;

		default:
			break;
		}

		cout << "Wybierz nazw� dla swojej postaci" << endl;
		cin >> characterName;

		PlayersInformation[i].characterName = characterName;
		PlayersInformation[i].Character = 

	}
}

void StartMenu::ContinueGame()
{
	////////////////////////////////////////////////
	// TODO
	// Poproszenie o wybranie save z listy za pomoc� nazwy / nr sava 
	// Do��czenienie do gry 
	////////////////////////////////////////////////
}

void StartMenu::SelectSaveGameObject()
{
}

void StartMenu::QuitGame()
{
	////////////////////////////////////////////////
	// TODO
	// Mo�liwo�� wyj�cia z gry 
	////////////////////////////////////////////////
}

