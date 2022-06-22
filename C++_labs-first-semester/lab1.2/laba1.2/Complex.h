#ifndef complex_h
#define complex_h

#include <iostream>
#include <cmath>

using namespace std;

struct Complex {
private:
	double re, im;
public:
	double abs;

	void sqr(double r, double i);


	void output();
};

#endif