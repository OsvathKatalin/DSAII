//
// Created by Just Ok on 16.03.2023.
//

#ifndef DSA2_LABOR5_H
#define DSA2_LABOR5_H
using namespace std;
#include <vector>
#include <queue>
#include <iostream>
#include <fstream>

typedef struct Point{
    int color;
    int father;
    int distance;
    vector<int>neighbors;
}Points;

vector <Points> neighborhoodListFromFile2(char * input);
vector <int> bfs_vector(vector <Point>&points,int startingPoint);
void print_vector(vector<int>vector1);
vector<int> DFS(vector<Point> &mPoints);
void dfsRun(vector<Point> &points, int current, vector<int> &dfs);



#endif //DSA2_LABOR5_H
