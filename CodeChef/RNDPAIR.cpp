#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        if(a[n-1]==a[n-2])
        {
            ll cnt=0;
            for(ll i=0;i<n;i++)
                if(a[i]==a[n-1]) cnt++;
            double ans=(1.0*cnt*(cnt-1))/(n*(n-1));
            cout << ans << endl;
            continue;
        }
        else
        {
            ll cnt=0;
            for(ll i=0;i<n;i++)
                if(a[i]==a[n-2]) cnt++;
            double ans=(2.0*cnt)/(n*(n-1));
            cout << ans << endl;
            continue;
        }
    }
}