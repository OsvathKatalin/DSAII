//
// Created by Just Ok on 13.02.2023.
//

#ifndef DSA2_LABOR1_H
#define DSA2_LABOR1_H
#include <iostream>
#include <fstream>

using namespace std;

class Array {
private:
    int numberOfElements;
    int *array;
public:

    Array() : numberOfElements() {}

    int getNRofE() {
        return numberOfElements;
    }
};


int *initializeArray(int numberOfElements);
void readArray(int *&array, int & numberOfElements, char
input[20]);
void printArray(int *array, int numberOfElements);
void printReverseArray(int *array, int numberOfElements);


#endif //DSA2_LABOR1_H
