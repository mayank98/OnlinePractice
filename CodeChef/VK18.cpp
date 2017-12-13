#include <bits/stdc++.h>
using namespace std;

#define N 1000000

int main()
{
    long long i;
    vector <long long> diamonds(2*N+1,0);
    for(i=2;i<=2*N;i++)
    {
        long long d,num=i;
        while(num>0)
        {
            d=num%10;
            if(d&1)
                diamonds[i]-=d;
            else
                diamonds[i]+=d;
            num=num/10;
        }
        diamonds[i]=abs(diamonds[i]);
    }
    vector <long long> diamondsCF=diamonds;
    for(i=3;i<=2*N;i++)
        diamondsCF[i]+=diamondsCF[i-1];
    vector <long long> ans(N+1,0);
    ans[1]=2;
    for(i=2;i<=N;i++)
        ans[i]=ans[i-1]+2*(diamondsCF[2*i]-diamondsCF[i])-diamonds[2*i];
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << ans[n] << endl;
    }
}