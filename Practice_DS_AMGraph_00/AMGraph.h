#pragma once

#define MAXInt 32767
#define MVNum 100

typedef char VertexType;
typedef int ArcType;
typedef struct
{
	VertexType vexs[MVNum];
	ArcType arcs[MVNum][MVNum];
	int vexnum = 0;
	int arcs = 0;
}AMGraph;

