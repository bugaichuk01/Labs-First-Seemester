#include "complex.h"
using namespace std;

void Complex::sqr(double r, double i) {
	re = r;
	im = i;
	abs = sqrt(re * re + im * im);
}


void Complex::output() {
	cout << endl << "Resulted complex number is " << "(" << re << ", " << im << ")" << endl;
}