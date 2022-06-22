//
// Created by ASUS on 12.04.2019.
//

#ifndef LABA3_CHILD_H
#define LABA3_CHILD_H

#include <iostream>
#include <string>
#include <math.h>

class Child {
private:

	string name;
	string surname;
	int age;

public:


	void Operation() {
		cout << "Enter your child's name :" << endl;
		cin >> name;
		cout << "Enter your child's surname :" << endl;
		cin >> surname;
		cout << "Enter your child's age :" << endl;
		cin >> age;

		cout << "Your child's name :" << name << endl;
		cout << "Your child's surname :" << surname << endl;
		cout << "Your child's age :" << age << endl;
		cout << "\n";
	}


};


#endif //LABA3_CHILD_H
#pragma once
