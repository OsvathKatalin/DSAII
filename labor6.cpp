//
// Created by Just Ok on 23.03.2023.
//

#include "labor6.h"


int sumt(int n,int *t)
{
    if(n==0) return 0;
    else
        return t[n-1]+sumt(n-1,t);
}

int mint(int n,int *t){
    if(n==1) return t[0];
    else
        return min(t[n-1],mint(n-1,t));
}

int maxt(int n,int *t){
    if(n==1) return t[0];
    else
        return max(t[n-1],mint(n-1,t));
}

float avgt(int n, int *t){
    return sumt(n,t)/(float)(n);
}

int productt(int n,int *t)
{
    if(n==1) return t[0];
    else
        return t[n-1]*productt(n-1,t);
}

int sumpair(int n)
{
    if(n==1) return n;
    else
        return n*2+ sumpair(n-1);

}

//Írj egy rekurzív függvényt mely megszámolja egy adott számjegy előfordulásat egy adott természetes számban.

int countM(long int nr,int m)
{
    if(nr==0) return 0;
    else{
        if (nr % 10 == m) {
            return 1 + countM(nr / 10, m);
        } else
            return countM(nr / 10, m);

    }
}

long int palindrom(long int nr, int pali = 0) {
        if (nr == 0) {
            return pali;
        } else {
            pali = pali * 10 + nr % 10;
            return palindrom(nr / 10, pali);
        }
    }


void f1()
{ //1->5
    int n=6;
    int *t= new int [n] {1,2,3,4,5,6};
    cout<<"Tomb elemeinek osszege:"<<sumt(n,t)<<endl;
    cout<<"Tomb lekisebb eleme:"<<mint(n,t)<<endl;
    cout<<"Tomb legnagyobb eleme:"<<maxt(n,t)<<endl;
    cout<<"Tomb elemeinek atlaga:"<<avgt(n,t)<<endl;
    cout<<"Tomb elemeinek szorzata:"<<productt(n,t)<<endl;
}

void f2()
{ //6->
    int m=8;
    cout<<"Elso n darab paros szam oszzege:"<<sumpair(m)<<endl;
    cout<<"Számjegy előfordulása egy adott számban:"<<countM(12343432,3)<<endl;
    double n=  234565432;
    cout<<palindrom(n,0)<<endl;
    if(palindrom(n,0)==n)  cout<<"Palindrom: "<<palindrom(n,0);
        else cout<<"nem "<<palindrom(n,0);


}

