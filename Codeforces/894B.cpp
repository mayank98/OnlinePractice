#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll fastModExp(ll base,ll power)
{
    if(power==0)
        return 1;
    ll a=fastModExp(base,power/2);
    a=(a*a)%MOD;
    if(power&1)
        return (a*base)%MOD;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll n,m,k;
    cin >> n >> m >> k;
    
    if((n+m)&1 && k==-1)
        cout << 0;
    else
    {
        ll a1=fastModExp(2,n-1);
        ll a2=fastModExp(a1,m-1);
        cout << a2;
    }
}