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
		
	}

	Complex(int  x1, int y1) {

		x = x1;
		y = y1;
		
	}

	Complex(const Complex& obj) {

		x = obj.x;
		y = obj.y;
		z = obj.z;
		f = obj.f;
	}

	void Calc() {
		z = sqrt(pow(x, 2) + pow(y, 2));
		f = atan(y / x);
	}
	
	~Complex() {

		cout << " Destructed" << "\n";
	
	}

	Complex& operator=(Complex& kop) {
		this->x = kop.x;
		this->y = kop.y;
		return *this;
	}

	bool operator >(Complex kop) {
		return this->z > kop.z && this->f > kop.f;

	}
	bool operator <(Complex kop) {
		return this->z < kop.z && this->f < kop.f;

	}
	bool operator >=(Complex kop) {
		return this->z >= kop.z && this->f >= kop.f;

	}
	bool operator <=(Complex kop) {
		return this->z <= kop.z && this->f <= kop.f;

	}
	bool operator !=(Complex kop) {
		return this->z != kop.z && this->f != kop.f;

	}
	bool operator ==(Complex kop) {
		return this->z == kop.z && this->f == kop.f;

	}
	
	friend const Complex operator++(Complex d, int) {
		Complex retcomp(d.x, d.y);
		d.x++;
		d.y++;
		return retcomp;
	}
	friend const Complex operator--(Complex d, int) {
		Complex retcomp(d.x, d.y);
		d.x++;
		d.y++;
		return retcomp;
	}
	friend const Complex& operator --(Complex& d) {
		d.x--;
		d.y--;
		return d;
	}
	friend const Complex& operator++(Complex& d) {
		d.x++;
		d.y++;
		return d;
	}

	friend ostream& operator<<(ostream& out, Complex& kop) {
		out << "The module of complex number is " << kop.z << endl;
		out << "The argumebt of complex number is " << kop.f << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Complex& kop) {
		cout << "Enter your real number :";
		cin >> kop.x;
		cout << "Enter your img number :";
		cin >> kop.y;
		return in;
	}
};


#endif //LABA3_COMPLEX_H#pragma once
