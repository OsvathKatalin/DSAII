//
// Created by Just Ok on 11.05.2023.
//

#ifndef DSA2_LABOR11_H
#define DSA2_LABOR11_H
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

typedef struct{
    int ido;
    char nev[50];
}Betegek;

typedef struct {
    string cim;
    int kezdet, veg;
}Film;

void rendezes(int n, int *t);
void rendezes1(Betegek *betegek, int n);
void penzek();
void betegek();
void filmek();
bool compareFilms(const Film& f1, const Film& f2);
vector<Film> filmKivalasztas(vector<Film>& films);

#endif //DSA2_LABOR11_H
