#include "Complex.h"
#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
	Vector vect1;
	cin >> vect1;
	vect1.Module();
	vect1.PlusMin();
	cout << vect1;

	Complex com1;
	Complex com2;
	cin >> com1;
	com1.Calc();
	cout << com1;
	cin >> com2;
	com2.Calc();
	cout << com2;

	if (com1 > com2) cout << com1;
	else if (com1 < com2) cout << com2;
	else if (com1 == com2) cout << com1 << com2;

	system("pause");
}

