#include "Bubblesort.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	SortableArray TestArray(12);
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < (TestArray.GetLength()); i++)
	{
		TestArray[i] = rand() % 30;
	}

	TestArray.printElements();

	std::cout << "Sorting array..." << std::endl;
	TestArray.Bubblesort();

	TestArray.printElements();

	return 0;
}

