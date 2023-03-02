#include <iostream>
#include "labor1.h"
#include "labor2.h"
#include "labor3.h"

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

int main() {

  //lab1();
   //lab2();
   lab3();



    return 0;
}
