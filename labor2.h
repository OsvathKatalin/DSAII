//
// Created by Just Ok on 23.02.2023.
//

#ifndef DSA2_LABOR2_H
#define DSA2_LABOR2_H
#include <iostream>
#include <vector>
#include <string>
#include "constants.h"
#include "fstream"

using namespace std;

int vectortest();
int vectortestpush();
int vectorconstructor();
int vectorcopy();
int copyfromArray();
int fillmethod();


typedef struct POINT {
    vector<int> neighbors;
} POINT;
typedef struct EDGE{
    int b,e;
}EDGE;

vector<EDGE> edgeListFromFile(char*input);
void printEdgeList(vector<EDGE> Edges);


//adjacency matrix
int **initializeAdjacencyMatrix(int numberOfRows, int numberOfColumns);
void readAdjacencyMatrix(int **&matrix, int & numberOfRows, char *input);
void printAdjacencyMatrix(int **matrix, int numberOfRows,char *output);

//neighborhood list
vector<POINT> neighborhoodListFromFile(char*input);
void printNeighborhoodList(vector<POINT> Points,char*output);


#endif //DSA2_LABOR2_H
