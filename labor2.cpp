//
// Created by Just Ok on 23.02.2023.
//

#include "labor2.h"


int vectortest()
{
    vector <int> v{1,2,3,4,5};
    for(int value:v)
        cout<<value<<" ";
    return 0;
}

int vectortestpush()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int value:v)
        cout<<value<<" ";
    return 0;
}

int vectorconstructor()
{
    //inits a five element vector of 1s
    vector <int> v(5,1);
    for(int value:v)
        cout<<value<<" ";
    return 0;
}

int vectorcopy()
{
    vector<int> v1 {1,2,3,4,5};
    vector<int> v2 (v1);
    for(int value:v2)
        cout<<value<<" ";
}

int copyfromArray()
{
    int a[] = {1,2,3,4,5};
    int length = sizeof(a)/sizeof(a[0]);
    vector <int> v(a,a+length);
    for(int value:v)
        cout<<value<<" ";
}

int fillmethod(){
    vector <int> v(5);
    fill(v.begin(),v.end(),1);
    for(int value:v)
        cout<<value<<" ";
}

vector<EDGE> edgeListFromFile(char *input) {
    ifstream fin(input);
    int pointNr, edgeNr;
    fin>>pointNr>>edgeNr;
    EDGE edge;
    edge.b=pointNr;
    edge.e=edgeNr;
    vector<EDGE> edges;
    edges.push_back(edge);
    for(int i=1;i<=edgeNr;i++)
    {
        int n,m;
        fin>>n>>m;
        edge.b=n;
        edge.e=m;
        edges.push_back(edge);
    }

    fin.close();
    return edges;
}

void printEdgeList(vector<EDGE> Edges) {
    for(auto e: Edges){
        cout<<e.b<<" "<<e.e<<endl;
    }
}

int **initializeAdjacencyMatrix(int numberOfRows) {
    int **matrix;
    matrix=new int*[numberOfRows+1];
    for (int i=1;i<=numberOfRows;i++)
    {
        matrix[i]=new int[numberOfRows];
    }
    return matrix;
}

void readAdjacencyMatrix(int **&matrix, int &numberOfRows, char *input) {
    ifstream fin(input);
    fin>>numberOfRows;
    matrix= initializeAdjacencyMatrix(numberOfRows);
    for(int i=1;i<=numberOfRows;i++)
    {
        for(int j=1;j<=numberOfRows;j++)
        {
            fin>>matrix[i][j];
        }
    }
    fin.close();
}

void printAdjacencyMatrix(int **matrix, int numberOfRows) {
    for(int i=1;i<=numberOfRows;i++)
    {
        for(int j=1;j<=numberOfRows;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}


//neighbourhoodlist

vector<POINT> neighborhoodListFromFile(char *input) {
    ifstream fin(input);
    vector <POINT>nList;
    int numberOfRows,numberOfNeighbours,a;
    fin>>numberOfRows;
    for(int i=1;i<=numberOfRows;i++)
    {
        fin>>numberOfNeighbours;
        for(int j=1;j<=numberOfNeighbours;j++)
        {
            fin>>a;
            pushb nList[i].neighbors;
        }


    }



    return vector<POINT>();
}

void printNeighborhoodList(vector<POINT> Points, char *output) {

}
