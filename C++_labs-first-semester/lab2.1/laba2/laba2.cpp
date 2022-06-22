
#include <iostream>


int sum(int a, int b)

{
	int rez = a + b;
	return rez;

}



int umn(int a, int b)

{
	int rez = a * b;
	return rez;

}

using namespace std;

int main() {
	int x, y, resu;
	int(*fptr)(int, int) = NULL;
	cout << "Enter numbers: ";
	cin >> x >> y;
	cout << "Set working mode  (1 - sum of Array ; 2 - mult of Array):";
	int f;
	cin >> f;
	switch (f)

	{

	case 1:
		fptr = sum;
		resu = fptr(x, y);
		break;
	case 2:
		fptr = umn;
		resu = fptr(x, y);
		break;

	}

	cout << endl;
	cout << resu;

	return 0;

}