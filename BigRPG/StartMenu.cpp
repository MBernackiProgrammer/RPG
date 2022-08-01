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
	// Poproszenie o nazwê sava
	// Stworzenie pliku zapisu - stworzenie klasy zapisu 
	// Do³¹czenie do gry - stworzenie klasy gry 
	////////////////////////////////////////////////

	//Zmienne lokalne 
	string SaveName;
	int maxPlayers;

	cout << "Podaj nazwe sava ktory chcesz utworzyc" << endl;
	cin >> SaveName;

	//jeœli nie istnieje utwórz ten save

	//Iloœæ graczy 
	cout << "Ile graczy bedzie gralo" << endl;
	cin >> maxPlayers;

	PlayersInfo* PlayersInformation = new PlayersInfo[maxPlayers];

	for (int i = 0; i < maxPlayers; i++)
	{
		int selectedOption;
		string characterName;
		cout << "Wybierz postaæ, do wyboru s¹ :" << endl;
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

		cout << "Wybierz nazwê dla swojej postaci" << endl;
		cin >> characterName;

		PlayersInformation[i].characterName = characterName;
		PlayersInformation[i].Character = 

	}
}

void StartMenu::ContinueGame()
{
	////////////////////////////////////////////////
	// TODO
	// Poproszenie o wybranie save z listy za pomoc¹ nazwy / nr sava 
	// Do³¹czenienie do gry 
	////////////////////////////////////////////////
}

void StartMenu::SelectSaveGameObject()
{
}

void StartMenu::QuitGame()
{
	////////////////////////////////////////////////
	// TODO
	// Mo¿liwoœæ wyjœcia z gry 
	////////////////////////////////////////////////
}

