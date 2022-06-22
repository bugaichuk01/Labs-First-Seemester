#pragma once
//
// Created by ASUS on 12.04.2019.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Complex {
private:

public:

	double x, y;
	double z, f;

	Complex() {

		x = 0;
		y = 0;
		z = 0;
		f = 0;
	}

	Complex(int  x1, int y1, int z1, int f1) {

		x = x1;
		y = y1;
		z = z1;
		f = f1;
	}

	

	Complex(const Complex& objects) : x(objects.x), y(objects.y), z(objects.z) , f(objects.f) {

		cout << "Copy here";
	}

	void Calc() {
		cout << "Enter your real number :";
		cin >> x;
		cout << "Enter your img number :";
		cin >> y;
		z = sqrt(pow(x, 2) + pow(y, 2));
		f = atan(y / x);
	}
	
	~Complex() {

		cout << " Destructed" << "\n";
	
	}

	void Output() {
		cout << "Your module :" << z << endl;
		cout << "The argument of a complex number: " << f << ";";
		cout << "\n";
	}
};


#endif //LABA3_COMPLEX_H#pragma once
