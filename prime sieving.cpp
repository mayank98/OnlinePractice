#include <bits/stdc++.h>
using namespace std;

#define N 1000001

int main()
{
    bool *sieve=new bool[N];
    long long i,j;
    for(i=2;i<N;i++)
        sieve[i]=true;
    for(i=2;i<N;i++)
    {
        if(sieve[i])
        {
            for(j=i*i;j<N;j=j+i)
                sieve[j]=false;
        }
    }
}
