#include <iostream>
#include <string>

using namespace std;

class Alive
{
protected:
	string name;
public:
	int weight;
	int height;
	string flora;

	~Alive() {}

};

class Bird : public Alive {

public:
	void operforbird() {
		cout << "Enter this bird name : " << endl;
		cin >> name;
		cout << "Enter this bird weight : " << endl;
		cin >> weight;
		cout << "Enter this bird height : " << endl;
		cin >> height;
		cout << "Enter this bird flora : " << flora;
		cin >> flora;
		cout << "I'm " << name << " from " << flora << " thirk-thirk-thirk ! " << endl;
	}
};

class Fish : public Alive {

public:
	void operforfish() {
		cout << "Enter this fish name : " << endl;
		cin >> name;
		cout << "Enter this fish weight : " << endl;
		cin >> weight;
		cout << "Enter this fish height : " << endl;
		cin >> height;
		cout << "Enter this fish flora : " << flora;
		cin >> flora;
		cout << "I'm " << name << " from " << flora << " bulk-bulk-bulk ! " << endl;
	}
};

class Animals : public Alive {

public:
	void operforanimal() {
		cout << "Enter this animal name : " << endl;
		cin >> name;
		cout << "Enter this animal weight : " << endl;
		cin >> weight;
		cout << "Enter this animal height : " << endl;
		cin >> height;
		cout << "Enter this animal flora : " << flora;
		cin >> flora;
		cout << "I'm " << name << " from " << flora << "  ! "<< endl;
	}
};