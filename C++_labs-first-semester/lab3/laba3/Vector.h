//
// Created by ASUS on 12.04.2019.
//

#ifndef LABA3_VECTOR_H
#define LABA3_VECTOR_H

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Vector {
private:

public:

	double r, x, y, z, x1, y1, z1, x2, y2, z2;
	char c;

	void Module() {

		cout << "Enter the vector coordinates :" << endl;
		cin >> x >> y >> z;

		r = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		cout << "The modulus of your vector is :" << r << endl;
		cout << "\n";
	}

	void PlusMin() {

		cout << "Enter the coordinates of the fitst vector :" << endl;
		cin >> x1 >> y1 >> z1;
		cout << "Enter the coordinates of the second vector :" << endl;
		cin >> x2 >> y2 >> z2;
		cout << " Enter operation : (+ , - , * , /)" << endl;
		cin >> c;
		switch (c) {
		case '+':
			x = x1 + x2;
			y = y1 + y2;
			z = z1 + z2;
			break;
		case '-':
			x = x2 - x1;
			y = y2 - y1;
			z = z2 - z1;
			break;
		default: cout << "Error symbol";

		}
		cout << "Your vector : " << "(" << x << "," << y << "," << z << ")" << "\n";
	}


};


#endif //LABA3_VECTOR_H
#pragma once
