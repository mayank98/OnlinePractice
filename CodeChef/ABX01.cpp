#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fastModExp(ll base,ll power)
{
    if(power==0)
        return 1;
    ll a=fastModExp(base,power/2);
    a=(a*a)%9;
    if(power&1)
        return (a*base)%9;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,n;
        cin >> a >> n;

        ll ans=fastModExp(a,n);
        if(ans==0) ans=9;
        cout << ans << endl;
    }
}