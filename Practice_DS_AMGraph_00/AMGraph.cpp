#include <stdio.h>
#include <iostream>

#include "AMGraph.h"

template <class T>
bool make2dArray(T**& x, int numberOfRows, int numberOfColumns)
{
	try
	{
		x = new T * [numberOfRows];

		for (int i = 0; i < numberOfRows; i++)
		{
			x[i] = new T[numberOfColumns];
		}
		return true;
	}
	catch (std::bad_alloc) { return false; }
}
template <class T>
void delete2dArray(T**& x, int numberOfRows)
{
	for (int i = 0; i < numberOfRows; i++)
	{
		delete[]x[i];
	}

	delete[] x;
	x = NULL;
}


class current
{
public:
	current(int x, int y);

private:
	int x;
	int y;
};
