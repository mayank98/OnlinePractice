#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 5

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

ll large_power(ll base,string power)
{
    ll n=power.size();
    ll ans=1;
    ll val=base%MOD;
    for(ll i=n-1;i>=0;i--)
    {
        ll a=fastModExp(val,power[i]-'0');
        ans=(ans*a)%MOD;
        val=fastModExp(val,10);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    string n;
    cin >> n;
    cout << (large_power(1,n)+large_power(2,n)+large_power(3,n)+large_power(4,n))%MOD;
}