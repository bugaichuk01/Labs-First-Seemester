//
// Created by ASUS on 12.04.2019.
//

#ifndef LABA3_TILES_H
#define LABA3_TILES_H


#include <iostream>
#include <string>


using namespace std;

class Tiles {
private:

	string brand;
	int size_h;
	int size_w;

public:
	

	void get_Data() {
		cout << "Enter your brand :" << endl;
		cin >> brand;
		cout << "Enter your size_h :" << endl;
		cin >> size_h;
		cout << "Enter your size_w :" << endl;
		cin >> size_w;

		cout << "Your brand :" << brand << endl;
		cout << "Your size_h :" << size_h << endl;
		cout << "Your size_w :" << size_w << endl;
		cout << "\n";
	}


};


#endif //LABA3_TILES_H
#pragma once
