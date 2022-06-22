	#pragma once
	#include <iostream>
	#include <string>

	using  namespace std;

	class Human {

	protected:
		string name;
		string surname;
		string midname;
		int age;
	public:
		Human() {}
		Human(string n, string s, string m, int a) {
	
			name = n;
			surname = s;
			midname = m;
			age = a;
		}

		virtual void print() = 0;
		~Human() {
			cout << "Destructed !";
		}
	};

	class Student : public Human {
	public:
		bool on_lesson;

		void print() override {


			cout << "Name : ";
			cin >> name;
			cout << "Surname : ";
			cin >> surname;
			cout << "Midname : ";
			cin >> midname;
			cout << "Age : ";
			cin >> age;
			cout << "Name is " << name << " " << surname << " " << midname << " " << age << " years old" << endl;

			//Human::print();
			if (on_lesson) cout << "On lession" << endl;
			else cout << "No" << endl;
		}
	};

	class Boss : public Human {

	public:
		int num_of_wor;

		void print() {

			cout << "Name : ";
			cin >> name;
			cout << "Surname : ";
			cin >> surname;
			cout << "Midname : ";
			cin >> midname;
			cout << "Age : ";
			cin >> age;
			cout << "Name is " << name << " " << surname << " " << midname << " " << age << " years old" << endl;
			cout << "This is Boss!" << endl;
			cout << "Workers?" << endl;
			cin >> num_of_wor;
			cout << "Workers : " << num_of_wor << endl;
		}

	};

