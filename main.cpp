#include <iostream>
#include "labor1.h"
#include "labor2.h"
#include "labor3.h"
#include "labor4.h"
#include "labor5.h"
#include "labor6.h"

void lab1task1() {
    int *array, n;
    readArray(array, n, "be.txt");
    printArray(array, n);
    printReverseArray(array, n);

}

void lab1task2(){
    int **matrix,m,n;
    readMatrix(matrix,m,n,"be2.txt");
    printMatrix(matrix,m,n);
}
void lab1(){
    lab1task1();
    lab1task2();
}

void lab2(){
    //vectortest();
    //vectortestpush();
    //vectorconstructor();
    //vectorcopy();
    //copyfromArray();
    //fillmethod();
    vector<EDGE> edges;
    edges=edgeListFromFile("edgelist.txt");
    printEdgeList(edges);
    int **adjencyMatrix, n;
    readAdjacencyMatrix(adjencyMatrix,n,"adj.txt");
    printAdjacencyMatrix(adjencyMatrix,n);

}

void lab3()
{
    //printDigitsOfNumberReverse(1234);
    cout<<averageDigitsOfNumber(123,0,0);
}


void lab5()
{
    vector<Point> points;
    points = neighborhoodListFromFile2("bebfs.txt");
    vector<int>bfs = bfs_vector(points,0);
    print_vector(bfs);

}

void lab6()
{
     f1();
     f2();
}



int main() {

   //lab1();
   //lab2();
   //lab3();
   //lab5();
    lab6();


    return 0;
}
