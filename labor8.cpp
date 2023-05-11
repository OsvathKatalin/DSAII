//
// Created by Just Ok on 27.04.2023.
//

#include "labor8.h"
using namespace std;
//Backtracking

bool igeretes(int *x,int k)
{int i;

    if(k==1 and x[k]==0) return false;

///Eredeti
    for(i=1;i<=k-1;++i)
    if(x[k]==x[i])
        return false;

    ///1.feladat///if(k>1 and abs(x[k]-x[k-1])==1) return false;
    return true;
}
void kiir(int *x,int k)
{int i;
    for(i=1;i<=k;++i)
        cout<<x[i]<<" ";
    cout<<endl;
}

void kiirreszhalmazint(int *x,int k)
{int i;
for(i=1;i<=k;++i)
    if(x[i]==1)
    cout<<i<<" ";
cout<<endl;
}

void BTP(int *x,int n,int k,int &count)
{
    for (x[k]=1; x[k]<=n; ++x[k])
    if (igeretes(x,k))
        if (k<n)
            BTP(x,n,k+1,count);
        else
        {
            //kiir(x,k);
            //if(count==15)kiir(x,k);
            count++;
        }


}
