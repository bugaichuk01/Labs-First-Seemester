#pragma once
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
	string name;
	string spec;
public:

	int age;
	int kurs;
	

	void info() {

		cout << "Enter this student name : " << endl;
		cin >> name;
		cout << "Enter this student specialnost : " << endl;
		cin >> spec;
		cout << "Enter this student age and kurs :" << endl;
		cin >> age >> kurs;

		}
	void infovivod() {

		cout << "Your name : " << name << endl;
		cout << "Your spec : " << spec << endl;
		cout << "Your age : " << age << endl;
		cout << "Your kurs : " << kurs << endl;

	}

	~Student() {}

};

class Starosta : public Student {
public:
	int personingroup;
	string groupname;

	void groupinfo() {
		cout << "Starosta info ::" << "\n\n";
		cout << "How much people in your group ? " << endl;
		cin >> personingroup;
		cout << "What is name of your group ? " << endl;
		cin >> groupname;

	}
	void groupinfovivod() {
		cout << "Person in yoour group : " << personingroup << endl;
		cout << "Your group name is " << name << endl;
	}
};

