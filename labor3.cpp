//
// Created by Just Ok on 02.03.2023.
//

#include "labor3.h"

void printDigitsOfNumber(int n) {
   if(n/10==0) cout<<n<<" ";
   else{
       printDigitsOfNumber(n/10);
       cout<<n%10<<" ";
   }
}

void printDigitsOfNumberReverse(int n) {
    if(n/10==0) cout<<n<<" ";
    else
    {   cout<<n%10<<" ";
        printDigitsOfNumberReverse(n/10);
    }
}

float averageDigitsOfNumber(int n, int numberOfDigits, int sum) {

    if(n/10==0)
    {
        numberOfDigits++;
        sum=sum+n;
        return float(sum)/float(numberOfDigits);
    }
    else
    {   sum+=n%10;
        return averageDigitsOfNumber(n/10,numberOfDigits+1,sum);
    }

}
