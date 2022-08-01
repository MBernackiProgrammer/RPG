#include <thread>
#include <string>
#include "SaveHelper.h"
using namespace std;

void DelegatedCreateSave(string saveName)
{
	///////////////////////////////////////////
	//TODO
	// Create file save with tags 
	///////////////////////////////////////////

	///////////////////////////////////////////
	// TAGS
	// [SN] - Save name - 
	// [CN] - Character name - 
	// [TC] - Chatacter Type - 
	// [GL] - Gold count - 
	// [XP] - XP count - 
	///////////////////////////////////////////
}

string SearchLine(string Tag)
{

	///////////////////////////////////////////
	// TODO
	// Zrobienie pêtli, w której to bêdzie sprawdzane czy 
	// tag jest równy linijce 
	// 
	///////////////////////////////////////////

	///////////////////////////////////////////
	// TAGS
	// [SN] - Save name - 
	// [CN] - Character name - 
	// [TC] - Chatacter Type - 
	// [GL] - Gold count - 
	// [XP] - XP count - 
	///////////////////////////////////////////

	return string();
}

void SaveHelper::CreateSave(string saveName)
{
	std::thread CreateSave(DelegatedCreateSave, saveName);
	CreateSave.join();
}

string SaveHelper::GetDataByType(GetDataType TypeOfData)
{
	switch (TypeOfData)
	{
	case NameSave:
		//Return save name

		return string();
		break;

	case CharacteName:
		//Return character name

		return string();
		break;

	case TypeChatacter:
		//Return character type 

		return string();
		break;

	case Gold:
		//Return count gold

		return string();
		break;

	case XP:
		//Return xp count

		return string();
		break;

	
	default:
		return string("NONE");
		break;
	}
}
