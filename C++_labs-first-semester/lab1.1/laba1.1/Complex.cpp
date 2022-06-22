#include "Complex.h"
#include <math.h>
#include <iostream>

using namespace std;

void pls(Complex x, Complex y) {  // Сложение
	Complex z;
	
	z.rel = x.rel + y.rel;
	z.img = x.img + y.img;
	if (z.img < 0) cout << "Result :" << z.rel << z.img << "i" << endl;
	else if (z.img > 0) cout << "Result :" << z.rel << "+" << z.img << "i" << endl;
	else cout << "Result :" << z.rel << endl;
}
void mns(Complex x, Complex y) { // Вычитание
	Complex z;
	
	z.rel = x.rel - y.rel;
	z.img = x.img - y.img;
	if (z.img < 0) cout << "Result :" << z.rel << z.img << "i" << endl;
	else if (z.img > 0) cout << "Result :" << z.rel << "+" << z.img << "i" << endl;
	else cout << "Result :" << z.rel << endl;

}
void umn(Complex x, Complex y) { // Умножение
	Complex z;

	z.rel = (x.rel * y.rel) - (x.img * y.img);
	z.img = (x.rel * y.img) + (y.rel * x.img);
	if (z.img < 0) cout << "Result :" << z.rel << z.img << "i" << endl;
	else if (z.img > 0) cout << "Result :" << z.rel << "+" << z.img << "i" << endl;
	else cout << "Result :" << z.rel << endl;
}
void del(Complex x, Complex y) { // Деление

	Complex z;
	double div = pow(y.rel, 2) + pow(y.img, 2);
	z.rel = (x.rel * y.rel + x.img * y.img) / div;
	z.img = (y.rel * x.img - x.rel * y.img) / div;
	if (z.img < 0) cout << "Result :" << z.rel << z.img << "i" << endl;
	else if (z.img > 0) cout << "Result :" << z.rel << "+" << z.img << "i" << endl;
	else cout << "Result :" << z.rel << endl;
}
