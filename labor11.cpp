//
// Created by Just Ok on 11.05.2023.
//

#include "labor11.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>




void penzek() {
    ifstream f("penzek.txt");
    int n, ossz,ossz1=0;
    f>>n;
    int t[n], j=n-1,t1[100];
    for (int i = 0; i < n; ++i) {
        f>>t[i];
    }

    rendezes(n,t);

    cout<<"Irjon be egy osszeget:";
    cin>>ossz;

    int i=0;

    while(ossz!=ossz1 && j>=0)
    {
        if(ossz1+t[j]<=ossz)
        {
            ossz1+=t[j];
            t1[i]=t[j];
            i++;
        }
        else
            j--;
    }
    if(ossz1!=ossz)
    {
        cout<<"Nem lehet kifizetni!";
    }
    else
    {
        cout<<"A kovetkezo bankjegyekkel lehet kifizetni: ";
        for (int k = 0; k < i; ++k) {
            cout<<t1[k]<<' ';
        }
    }
    f.close();
}

void rendezes(int n, int *t) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (t[j] > t[j + 1])
                swap(t[j], t[j + 1]);
}

void betegek() {
    ifstream f("beteg.txt");
    ofstream g("beosztas.txt");

    int n;
    f>>n;

    Betegek betegek[n];

    for (int i = 0; i < n; ++i) {
        f.getline(betegek[i].nev,49);
        f.getline(betegek[i].nev,49);
        f>>betegek[i].ido;
    }

    rendezes1(betegek,n);

    int j=0, ora=8, perc=0;

    for (int i = 0; i < n; ++i) {
        g<<betegek[i].nev<<' '<<ora<<" ora "<<perc<<" perc"<<endl;
        if(perc+betegek[i].ido<60)
            perc+=betegek[i].ido;
        else
        {
            ora++;
            perc+=betegek[i].ido;
            perc-=60;
        }
    }
    f.close();
    g.close();
}

void rendezes1(Betegek *betegek, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (betegek[j].ido > betegek[j + 1].ido)
            {
                swap(betegek[j].ido, betegek[j + 1].ido);
                swap(betegek[j].nev, betegek[j + 1].nev);
            }
}

bool compareFilms(const Film& f1, const Film& f2) {
    return f1.veg < f2.veg;
}

vector<Film> filmKivalasztas(vector<Film>& films) {
    vector<Film> valasztottFilm;
    sort(films.begin(), films.end(), compareFilms);
    int utolso = 0;
    for (const auto& film : films) {
        if (film.kezdet >= utolso) {
            valasztottFilm.push_back(film);
            utolso = film.veg;
        }
    }
    return valasztottFilm;
}

