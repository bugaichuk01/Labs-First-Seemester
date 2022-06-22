#include <vector>
#include <iostream>
#include <list>
#include <queue>
#include <iterator>
#include "Complex.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	string student;
	vector <string> students;
	cout << "Введите имена студентов, когда закночите, введите . , чтобы программа завершилась:\n";
	while (student != ".") {
		cin >> student;
		students.push_back(student);	
		}
	cout << "Ваши студенты: !\n";
	for (int i = 0; i < students.size(); i++) {
		cout << students.at(i) << " \n";
	}

	list <Complex> comp;

	Complex first(2, 4);
	Complex second(3, 8);
	Complex third(1, 0);
	Complex fourth(11, 21);
	
	comp.push_back(first);
	comp.push_back(second);
	comp.push_front(third);
	comp.push_back(fourth);
	
	cout << comp.front();
	cout << comp.back();
	cout << comp.size();

	comp.clear();

	queue<string> automob;
	int ch;

	cout << "\nОчередь из: " << endl;
	cin >> ch;
	cout << "\nВведите номера машин: " << endl;
	for (int h = 0; h < ch; h++) {
		string a;
		cin >> a;
		automob.push(a);
	}
		cout << "\n";
		cout << "Первая машина под номером: " << automob.front() << "\n"; 
		cout << "Последняя: " << automob.back() << "\n";
		cout << "Размер очереди: " << automob.size() << "\n";
		automob.pop();  
		cout << "\nТеперь первая машина под номером: " << automob.front() << "\n";
		cout << "Последняя: " << automob.back() << "\n";
		cout << "Размер очереди: " << automob.size() << "\n";
		system("pause");
}
