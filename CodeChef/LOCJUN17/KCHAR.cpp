#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    long long twos[61];
    twos[0]=1;
    for(int i=1;i<61;i++)
        twos[i]=2*twos[i-1];
    while(t--)
    {
        long long k;
        cin >> k;
        int n=0;
        for(i=0;i<61;i++)
        {
            if(twos[i]==k+1)
            {
                n=i;
                break;
            }
        }
        if(n==0)
            n=floor(log(k+1)/log(2))+1;
        int len=n;
        int inv=1;
        while(len>1)
        {
            if(k>twos[len-1])
            {
                k=twos[len]-k;
                inv=inv*(-1);
            }
            if(k==twos[len-1])
            {
                k=1;
                break;
            }
            len--;
        }
        char ans='a';
        if(inv==-1)
            ans='c';
        cout << ans << endl;
    }
}
