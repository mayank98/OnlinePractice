#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed;
    // cout << setprecision(16);
    
    ll n,k,a,b,i;
    cin >> n >> k >> a >> b;

    if(k==1)
    {
        cout << a*(n-1);
        return 0;
    }
    ll x=n,coins=0;
    while(x!=1 && x>0)
    {
        if(x%k!=0)
        {
            coins+=a*(x%k);
            x-=x%k;
        }
        else
        {
            coins+=min(a*(x-(x/k)),b);
            x=x/k;
        }
    }
    if(x==0)
        coins-=a;
    cout << coins;
}