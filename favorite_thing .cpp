#include <iostream>
#include <string>
#include "favorite_thing .h";
#include "favoritething_List .h";
using namespace std;



	favorite_thing::favorite_thing()
	{
		name = "";
		description = "";
		type = "";
		brand = "";
		version = "";
	}

	favorite_thing::favorite_thing(string a, string b, string c, string d, string e){
		name = a;
		description =b;
		type = c;
		brand = d;
		version = e;
	}

	//getter...
	string favorite_thing::getName(){ return name; }
	string favorite_thing::getDescription(){ return description; }
	string favorite_thing::getType(){ return type; }
	string favorite_thing::getBrand(){ return brand; }
	string favorite_thing::getVersion(){ return version; }

	//setter....

	void favorite_thing::setName(string a){ name = a; }
	void favorite_thing::setDescription(string b){ description = b; }
	void favorite_thing::setType(string c){ type = c; }
	void favorite_thing::setBrand(string d){ brand = d; }
	void favorite_thing::setVersion(string e){ version = e; }


	void favorite_thing::getFav_ItemInput(){
		cout << "Enter the name of your favorite item" << endl;
		cin >> name;
		cout << "Enter Description " << endl;
		cin >> description;
		cout << "Enter Type ,like its a book, movie , Cd or another thing" << endl;
		cin >> type;
		cout << " Enter brand  or company name" << endl;
		cin >> brand;
		cout << "Enter version or edition " << endl;
		cin >> version;
	}


	ostream& operator<<(ostream &output, favorite_thing &i)
	{
		output << "Name of Favorite thing: " << i.name << endl;
		output << "|" << i.description << "|" << i.type << "|" << i.brand << "|" << i.version << endl;
		return output;
	}







