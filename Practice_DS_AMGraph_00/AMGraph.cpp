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

bool CreatUND(AMGraph& G)
{
	fprintf(stdout, "请输入顶点数和边数：\n");
	fscanf_s(stdin, "%d %d", &G.vexnum, &G.arcnum);
	fprintf(stdout, "请输入顶点信息：");
	for (int i = 0; i < G.vexnum; i++)
	{
		fscanf_s(stdin, "%c", &G.vexs[i]);
	}
	for (int i = 0; i < G.arcnum; i++)
	{
		for (int j = 0; j < G.arcnum; j++)
		{
			G.arcs[i][j] = MAXInt;
		}
	}

}
