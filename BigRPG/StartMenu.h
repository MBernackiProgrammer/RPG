#pragma once
#include "BasicCharacter.h"
#include <string>
using std::string;

struct PlayersInfo
{
	string characterName;
	BasicCharacter* Character;
};

class StartMenu
{
public :
	void LoadMenu();

private:
	void NewGame();
	void ContinueGame();
	void SelectSaveGameObject();
	void QuitGame();
};