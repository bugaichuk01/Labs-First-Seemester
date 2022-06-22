#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
	Child child1;
	child1.Operation1();
	child1.Operation2();

	Tiles tile1;
	tile1.get_Data();

	Vector vec1;
	vec1.Module();
	vec1.PlusMin();

	Complex com1;
	com1.Calc();
	com1.Output();


	system("pause");
}

