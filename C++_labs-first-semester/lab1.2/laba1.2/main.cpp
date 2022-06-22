#include <fstream>
#include <iostream>
#include <string>
#include "complex.h"

using namespace std;


int main() {
	Complex max;
	int n;
	double re, im;
	ifstream complex;
	complex.open("Complex.txt", ios::in);
	complex >> n;
	Complex p[n];
	for (int i = 0; i < n; i++)
	{
		complex >> re >> im;
		p[i].sqr(re, im);
		
	}
	max = p[0];
	for (int i = 1; i < n; i++)
	{
		if (p[i].abs > max.abs)
			max = p[i];
	}
	max.output();
	system("pause");
	return 0;
}