//
// Created by Just Ok on 13.02.2023.
//

#ifndef DSA2_LABOR1_H
#define DSA2_LABOR1_H
#include <iostream>
#include <fstream>

using namespace std;

//tomb

int *initializeArray(int numberOfElements);
void readArray(int *&array, int & numberOfElements, char
input[20]);
void printArray(int *array, int numberOfElements);
void printReverseArray(int *array, int numberOfElements);

//matrix

int **initializeMatrix(int numberOfRows, int numberOfColumns);
void readMatrix(int **&matrix, int & numberOfRows, int &
numberOfColumns, char input[20]);
void printMatrix(int **matrix, int numberOfRows, int
numberOfColumns);


#endif //DSA2_LABOR1_H
