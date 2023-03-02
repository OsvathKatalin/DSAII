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
    fin.close();
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

int **initializeMatrix(int numberOfRows, int numberOfColumns) {
    int **matrix;
    matrix = new int*[numberOfRows];
    for(int i=0;i<numberOfRows;i++)
    {
        matrix[i]=new int[numberOfColumns];
    }
    return matrix;
}

void readMatrix(int **&matrix, int &numberOfRows, int &numberOfColumns, char *input) {
    cout<<"bb";
    ifstream fin(input);
    fin>>numberOfRows>>numberOfColumns;
    matrix=initializeMatrix(numberOfRows,numberOfColumns);
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            fin>>matrix[i][j];
        }
}

void printMatrix(int **matrix, int numberOfRows, int numberOfColumns) {
    for(int i=0;i<numberOfRows;i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}



