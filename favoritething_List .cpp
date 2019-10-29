#include <iostream>
#include <string>
#include "favorite_thing .h";
#include "favoritething_List .h";
using namespace std;



	favoritething_List::favoritething_List(){
		listSize = 1000;
		current_Size = *(&arr + 1) - arr;
		
}

	void favoritething_List::AddItem(favorite_thing fg) {
		if (this->current_Size < this->listSize){
			this->arr[this->current_Size].setName(fg.getName());
			this->arr[this->current_Size].setDescription(fg.getDescription());
			this->arr[this->current_Size].setType(fg.getType());
			this->arr[this->current_Size].setBrand(fg.getBrand());
			this->arr[this->current_Size].setVersion(fg.getVersion());
			current_Size = current_Size + 1;
		}
		
	}
	void favoritething_List::showList()
	{
		int i;
		for (i = 0; i <this->current_Size; i++)
		{
			cout << arr[i];
		}
		cout << "total quantity of all item is" << newSize << endl;
	}

