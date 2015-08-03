#include "stdafx.h"
#include "Bubblesort.h"
#include <iostream>
#include <ctime>


// This is just a demo, and you'll get errors as there are missing files.

int _tmain(int argc, _TCHAR* argv[])
{
	SortableArray TestArray(10);
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < (TestArray.getLength()); i++)
	{
		TestArray[i] = rand() % 30;
	}

	std::cout << "The elements of the array are randomly assigned: " << std::endl;
	TestArray.printElements();

	std::cout << "Then they are sorted into the right order: " << std::endl;
	TestArray.bubbleSort();

	TestArray.printElements();

	return 0;
}