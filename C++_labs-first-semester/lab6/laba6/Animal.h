#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string name;
public:
	int age;
	string color;

	~Animal() {}

};

class Dog : public Animal {

public:

	bool walk;
	int vkl;

	void walking() {
		cout << "Want to walk? (1 - yes/ 2 - no)" << endl;
		cin >> vkl;
		if (vkl == 1) {
			walk = true;
		}
		else if (vkl == 2) {
			walk = false;
		}
		else cout << "Error symbol!" << endl;

		if (walk) {
			cout << "I'm walking!" << "(" << walk << ")" << endl;
		}
		else cout << "I'll stay here!" << "(" << walk << ")" << endl;
	}
	void Operdog() {
		cout << "Enter dthis dog name : " << endl;
		cin >> name;
		cout << "Enter this dog age : " << endl;
		cin >> age;
		cout << "Enter this dog color: " << color;
		cin >> color;
		cout << "I'm dog and my name is " << name << " vuf-vuf ! " << endl;
	}
};

class Cat : public Animal {

public:
	void Opercat() {
		cout << "Enter this cat name : " << endl;
		cin >> name;
		cout << "Enter this cat age : " << endl;
		cin >> age;
		cout << "Enter this cat color: " << color;
		cin >> color;
		cout << "I'm cat and my name is " << name << " meow-meow ! " << endl;
	}

};
