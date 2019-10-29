#include <iostream>
#include <string>
#include "favorite_thing .h";
#include "favoritething_List .h";
using namespace std;

int main()

{
	favoritething_List myList;
	favorite_thing obj, obj1;
	int optn = 0;

	cout << " \n \n **--Hello! Welcome here we are going to keep track of  your favorite things--** " << endl;
	do{
		cout << " \t **---------------------------------------------**" << endl;
		cout << " \t **----Press 1 to display list of your favorite things----**" << endl;
		cout << " \t **----Press 2 to add new item in your list----**" << endl;
		cout << " \t **----Press 3 to Exit--------------------------**" << endl;
		cin >> optn;
		if (optn == 1){
			myList.showList();

		}
		else if (optn == 2){

			obj1.getFav_ItemInput();
			myList.AddItem(obj1);
			//cout << obj << endl;
		}
	} while (optn!=3);
	cout << "Thank you !!";
	
	

	system("pause");
	return 0;
}
