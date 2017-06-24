#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool *sieve=new bool[n+1];
    int i,j;
    for(i=0;i<n+1;i++)
        sieve[i]=true;
    sieve[0]=(sieve[1]=false);
    for(i=2;i<=sqrt(n);i++)
    {
        if(sieve[i])
        {
            for(j=i*i;j<n+1;j=j+i)
                sieve[j]=false;
        }
    }
    /*
    for(i=0;i<n+1;i++)
        if(sieve[i])
            cout << i << " ";
    */
}
