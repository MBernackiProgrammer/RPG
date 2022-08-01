#pragma once
#include <string>
using std::string;

enum GetDataType
{
	NameSave,
	CharacteName,
	TypeChatacter,
	Gold, 
	XP,
};

class SaveHelper
{
public :
	void CreateSave(string saveName);
	string GetDataByType(GetDataType TypeOfData);
};