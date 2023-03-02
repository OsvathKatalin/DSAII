//
// Created by Just Ok on 02.03.2023.
//

#ifndef DSA2_LABOR3_H
#define DSA2_LABOR3_H
#include <iostream>
#include <vector>
#include <string>
#include "constants.h"
#include "fstream"

using namespace std;


void printDigitsOfNumber(int n);
void printDigitsOfNumberReverse(int n);
/**
*
* @param n natural number
* @param numberOfDigits initial is 0
* @param sum initial is 0
* @return average digits number of number n
*/
float averageDigitsOfNumber(int n, int numberOfDigits,
                            int sum);


#endif //DSA2_LABOR3_H
