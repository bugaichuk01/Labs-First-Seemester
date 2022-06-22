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

	void Calc() {
		cout << "Enter your real number :" << endl;
		cin >> x;
		cout << "Enter your img number :" << endl;
		cin >> y;
		z = sqrt(pow(x, 2) + pow(y, 2));
		f = atan(y / x);
	}

	void Output() {
		cout << "Your module :" << z << endl;
		cout << "The argument of a complex number: " << f << ";";
		cout << "\n";
	}
};


#endif //LABA3_COMPLEX_H#pragma once
