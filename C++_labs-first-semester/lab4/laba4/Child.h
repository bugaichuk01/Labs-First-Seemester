#pragma once
//
// Created by ASUS on 12.04.2019.
//

#ifndef LABA3_CHILD_H
#define LABA3_CHILD_H

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Child {
private:

	string name;
	string surname;
	int age;

public:
		
	Child() {

		name = "Default";
		surname = "Default";
		age = 0;
	}

	Child(string n, string s, int a) {

		name = n;
		surname = s;
		age = a;

	}

	
	Child(const Child& objects) : name(objects.name), surname(objects.surname), age(objects.age) {

		cout << "Copy here";
	}

	void Operation1() {
		cout << "Enter your child's name :" << endl;
		cin >> name;
		cout << "Enter your child's surname :" << endl;
		cin >> surname;
		cout << "Enter your child's age :" << endl;
		cin >> age;
	}

	~Child() {

		cout << "Class named " << name << " is Destructed" << "\n";
	}

	void Operation2() {

		cout << "Your child's name :" << name << endl;
		cout << "Your child's surname :" << surname << endl;
		cout << "Your child's age :" << age << endl;
		cout << "\n";
	}


};


#endif //LABA3_CHILD_H
