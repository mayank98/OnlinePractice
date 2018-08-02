#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll fastModExp(ll base,ll exp)
{
    if(exp==0)
        return 1;
    ll a=fastModExp(base,exp/2);
    a=(a*a)%MOD;
    if(exp&1)
        return (a*base)%MOD;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,w;
        cin >> n >> w;
        ll d=0;
        for(ll i=1;i<10;i++)
        {
            if(i+w<10 && i+w>=0)
                d++;
        }
        cout << (d*fastModExp(10,n-2))%MOD << endl;
    }
}