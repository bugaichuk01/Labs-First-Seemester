#include <iostream>
#include "Complex.h"
#include <math.h>
#include <fstream>

using namespace std;

int main() {

	Complex x, y;
	int c = 1, b = 2;
	char u;
	while (c) {
		cout << "Enter the real and imaginary part of the first number :" << endl;
		cin >> x.rel >> x.img;
		cout << "Enter the real and imaginary part of the second number :" << endl;
		cin >> y.rel >> y.img;
		cout << "Enter your symbol :" << endl;
		cin >> u;
		switch (u) {
		case '+':
			pls(x, y);
			break;
		case '-':
			mns(x, y);
			break;
		case '/':
			del(x, y);
			break;
		case '*':
			umn(x, y);
			break;
		default:
			if (u != '+' && u != '-' && u != '*' && u != '/') {
				cout << "Error , try again later!" << endl;
			}
		}
		cout << "do another calculation?" << endl << "1 - Yes" << endl << "2 - No" << endl;
		cin >> b;
		if (b == 1)
			continue;
		else if (b == 2)
			break;
		else cout << "Error, try again later!" << endl;
		cin >> b;

	}

	return 0;
}
