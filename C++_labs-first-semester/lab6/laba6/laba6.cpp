#include <iostream>
#include "Alive.h"
#include "Animal.h"
#include "Starosta.h"

using namespace std;

int main() {

	Student stud1;
	stud1.info();
	stud1.infovivod();
	Starosta stud2;
	stud2.info();
	stud2.groupinfo();
	stud2.infovivod();
	stud2.groupinfovivod();
	

	Bird popug;
	popug.operforbird();
	Fish shark;
	shark.operforfish();
	Animals dog;
	dog.operforanimal();
	

	Dog dog1;
	dog1.Operdog();
	dog1.walking();
	Cat cat1;
	cat1.Opercat();

	system("pause");
	return 0;
}