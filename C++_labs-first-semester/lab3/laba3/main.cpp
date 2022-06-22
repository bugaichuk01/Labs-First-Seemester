#include <iostream>
#include <string>
#include "Complex.h"
#include "Child.h"
#include "Tiles.h"
#include "Vector.h"


int main() {



	Child child1;
	child1.Operation();
	Child child2;
	child2.Operation();

	Tiles tile1;
	Tiles tile2;
	tile1.get_Data();
	tile2.get_Data();

	Vector vec1;
	Vector vec2;
	vec1.Module();
	vec1.PlusMin();
	vec2.Module();
	vec2.PlusMin();

	Complex com1;
	Complex com2;
	com1.Calc();
	com1.Output();
	com2.Calc();
	com2.Output();



	system("pause");
	return 0;
}