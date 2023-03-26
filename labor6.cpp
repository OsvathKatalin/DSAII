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

    bool binary(long int nr)
    {
    if(nr==0 or nr==1) return true;
    else
    if (nr%10>1) return false;
    else return binary(nr/10);
    }

    bool ascending(long int nr)
    {
    if (nr<10) return true;
    else {if((nr/10)%10>nr%10) return false;
        else return ascending(nr/10);}
    }


    bool mgh(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        else return false;
    }

    string deletemgh(string szoveg)
    {
    if(szoveg.length()==0)
        return szoveg;
    else
        if (mgh(szoveg[0]))
            return deletemgh(szoveg.substr(1));
        else
            return szoveg[0] + deletemgh(szoveg.substr(1));
    }


    int countWords(string szoveg)
    {
    if (szoveg.length()==0)
        return 0;
    else {
        if(szoveg.find(' ')!=string::npos) //npos a find fuggveny visszateritett konstans erteke ha nem talalta azt meg
        return 1+ countWords(szoveg.substr(szoveg.find(' ')+1));
    else return 1;}

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
{ //6->9
    int m=8;
    cout<<"Elso n darab paros szam oszzege:"<<sumpair(m)<<endl;
    cout<<"Számjegy előfordulása egy adott számban:"<<countM(12343432,3)<<endl;
    double n=  234565432;
    cout<<palindrom(n,0)<<endl;
    if(palindrom(n,0)==n)  cout<<"Palindrom: "<<palindrom(n,0)<<endl;
        else cout<<"nem "<<palindrom(n,0)<<endl;
        long int nr=1111000011;
     if(binary(nr)) cout<<nr<<" binaris"<<endl;
        else cout<<nr<<" nem binaris"<<endl;

        nr=123455432;
    if(binary(nr)) cout<<nr<<" binaris"<<endl;
    else cout<<nr<<" nem binaris"<<endl;

    if(ascending(nr)) cout<<nr<<" novekvo szamjegyek"<<endl;
    else cout<<nr<<" nem novekvo szamjegyek"<<endl;

    nr = 1234567;
    //nr=8765432;
    if(ascending(nr)) cout<<nr<<" novekvo szamjegyek"<<endl;
    else cout<<nr<<" nem novekvo szamjegyek"<<endl;


    string szoveg= "nem akarok porszivozni";
    cout<<deletemgh(szoveg)<<endl;
    cout<<"szavak szama:"<<countWords(szoveg);

}


// Rekurzív legnagyobb közös osztó számítása
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Rekurzív legkisebb közös többszörös számítása
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}



void f3(){
    //tortek osszeadasa
    // beolvas allomanybol
    typedef struct Tort{
        int szamlalo;
        int nevezo;
    };
}

int binarySearch(vector<int>& nums, int left, int right, int target, int step) {
    if (left > right) {
        // Az elem nem található meg
        return -1;
    }

    int middle = (left + right) / 2;
    if (nums[middle] == target) {
        // Az elem megtalálva
        return step;
    } else if (nums[middle] > target) {
        // Az elem a bal oldalon lehet
        return binarySearch(nums, left, middle - 1, target, step + 1);
    }
}

void f4(){
    //divid et impera
    vector<int> nums =  {3, 5, -7, 8, 2, -1, 6};
    sort(nums.begin(), nums.end());
}

