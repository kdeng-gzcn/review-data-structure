#pragma once
#include<iostream>
using namespace std;

// 图的邻接矩阵类型
#define MAXV 50
#define INF 32767

typedef struct
{
	int no; // the sequence of vertex
}vertexType;

typedef struct
{
	int edge[MAXV][MAXV];
	int n; // number of vertex
	int e; // number of edge
}matGraph;



// 图的邻接表存储

