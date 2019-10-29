#pragma once
#include <iostream>
#include <string>
using namespace std;

class favorite_thing{

private:

	string name;
	string description;
	string type;
	string brand;
	string version;

public:

	//constructor....
	favorite_thing();
	favorite_thing(string a, string b, string c, string d, string e);

	//getter....
	string getName();
	string getDescription();
	string getType();
	string getBrand();
	string getVersion();

	//setter....
	void setName(string n);
	void setDescription(string n);
	void setType(string n);
	void setBrand(string n);
	void setVersion(string n);

	void getFav_ItemInput();
	//friend function...
	friend ostream& operator<<(ostream &output, favorite_thing &i);


};// end of class