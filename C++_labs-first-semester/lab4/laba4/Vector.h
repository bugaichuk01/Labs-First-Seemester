#pragma once
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


	Vector() {
	
		r = 0;
		x = 0;
		y = 0;
		z = 0;
		x1 = 0;
		y1 = 0;
		z1 = 0;
		x2 = 0;
		y2 = 0;
		z2 = 0;
	}

	Vector(int rr, int xx, int yy, int zz, int x11, int y11, int z11, int x22, int y22, int z22) {
		r = rr;
		x = xx;
		y = yy;
		z = zz;
		x1 = x11;
		y1 = y11;
		z1 = z11;
		x2 = x22;
		y2 = y22;
		z2 = z22;
	}

	Vector(const Vector& obj) {

		r = obj.r;
		x = obj.x;
		y = obj.y;
		z = obj.z;
		x1 = obj.x1;
		y1 = obj.y1;
		z1 = obj.z1;
		x2 = obj.x2;
		y2 = obj.y2;
		z2 = obj.z2;
	}


	~Vector() {

		cout << "Destructed" << endl;
	}

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
		cout << " Enter operation : (+ , -)" << endl;
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
