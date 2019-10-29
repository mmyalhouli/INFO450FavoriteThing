#pragma once
#include <iostream>
#include <string>
#include "favorite_thing .h";
using namespace std;

class favoritething_List{

	int listSize;
	favorite_thing arr[1000];
	int current_Size;
	int newSize;

public:

	//constructor......
	favoritething_List(); 

	//Methods......
	void AddItem(favorite_thing obj);
	void showList();

};