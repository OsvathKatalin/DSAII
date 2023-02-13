//
// Created by Just Ok on 13.02.2023.
//

#include "labor1.h"

int *initializeArray(int numberOfElements) {
    int *array;
    array = new int[numberOfElements];
    return array;
}

void readArray(int *&array, int &numberOfElements, char *input) {

    ifstream fin(input);
    fin>>numberOfElements;
    array=initializeArray(numberOfElements);
    for (int i = 0; i < numberOfElements; ++i) {
        fin >> *(array + i);
    }
}

void printArray(int *array, int numberOfElements) {
    cout<<numberOfElements<<endl;
    for (int i = 0; i < numberOfElements; ++i) {
        cout << *(array + i)<<" ";
    }
    cout<<endl;
}

void printReverseArray(int *array, int numberOfElements) {
    for (int i = numberOfElements-1; i >= 0; i--) {
        cout << *(array + i)<<" ";
    }
}

