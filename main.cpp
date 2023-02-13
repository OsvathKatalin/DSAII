#include <iostream>
#include "labor1.h"

int main() {

    int *array,n;
    readArray(array,n,"be.txt");
    printArray(array,n);
    printReverseArray(array,n);
    return 0;
}
