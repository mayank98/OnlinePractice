#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll fastExp(ll base,ll power)
{
    if(power==0)
        return 1;
    ll a=fastExp(base,power/2);
    a=(a*a)%MOD;

    if(power&1)
        return (base*a)%MOD;
    return a;
}

ll frac(ll p,ll q)
{
    if(q==0)
        return 1;
    return ((p%MOD)*fastExp(q,MOD-2))%MOD;
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
        ll n,k;
        cin >> n >> k;

        if(n<k)
        {
            cout << 0 << endl;
            continue;
        }

        ll i,lim=min(k,n-k+1);
        
        ll ans=0;
        ll val1=1;
        ll val2=1;
        for(i=1;i<=lim;i++)
        {
            val1=(val1*frac(k-1-(i-2),i-1))%MOD;
            val2=(val2*frac(n-k+1-(i-1),i))%MOD;
            ll a=(val1*val2)%MOD;
            a=(a*fastExp(2,i))%MOD;
            ans=(ans+a)%MOD;
        }

        cout << ans << endl;
    }
}