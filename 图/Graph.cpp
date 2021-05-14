#include<iostream>
#include <vector>
using namespace std;

#define MAXV 5  // 最大顶点个数

typedef struct
{
    int no; // 顶点信息
    // InfoType info;  // 顶点其他信息
    char info;
}VertexType;

typedef struct
{
    int edges[MAXV][MAXV];  // 邻接矩阵
    int n,e;   // 顶点数，边数
    VertexType vex[MAXV]; // 存放顶点信息
}MGraph;



int main(){
    
    return 0;
}