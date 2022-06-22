#pragma once
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

	Tiles() {

		brand = "Default";
		size_h = 0;
		size_w = 0;
	}

	Tiles(string br, int sh, int sw) {

		brand = br;
		size_h = sh;
		size_w = sw;
	}

	

	Tiles(const Tiles& objects) : brand(objects.brand), size_h(objects.size_h), size_w(objects.size_w) {

		cout << "Copy here";
	}

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

	~Tiles() {

		cout << "Destructed" << "\n";
	}

};


#endif //LABA3_TILES_H
#pragma once
