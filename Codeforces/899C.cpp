#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll n;
    cin >> n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
        a[i]=i;
    if(n==2)
    {
        printf("1\n1 1");
        return 0;
    }
    if(n==3)
    {
        printf("0\n1 3");
        return 0;
    }
    
    ll rem=n%4;
    ll k=n/4;
    if(rem==0)
    {
        printf("0\n%d ",2*k);
    }
    else if(rem==1 || rem==2)
    {
        printf("1\n%d 1 ",2*k+1);
    }
    else
    {
        printf("0\n%d 3 ",2*k+1);
    }
    for(ll i=rem+1;i<rem+1+k;i++)
        printf("%d ",i);
    for(ll i=n;i>=n-k+1;i--)
        printf("%d ",i);
}