#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,b,f,k;
    cin >> a >> b >> f >> k;
    ll ans=0;
    ll fuel_left=b-f;
    for(ll i=1;i<k;i++)
    {
        if(fuel_left<0)
        {
            cout << -1;
            return 0;
        }
        if(i&1)
        {
            if(fuel_left<2*(a-f))
            {
                ans++;
                fuel_left=b;
            }
            fuel_left-=2*(a-f);
        }
        else
        {
            if(fuel_left<2*f)
            {
                ans++;
                fuel_left=b;
            }
            fuel_left-=2*f;
        }
    }
    if(fuel_left<0)
    {
        cout << -1;
        return 0;
    }
    if(k&1)
    {
        if(fuel_left<(a-f))
        {
            ans++;
            fuel_left=b;
        }
        fuel_left-=(a-f);
    }
    else
    {
        if(fuel_left<f)
        {
            ans++;
            fuel_left=b;
        }
        fuel_left-=f;
    }
    if(fuel_left<0)
    {
        cout << -1;
        return 0;
    }
    else
        cout << ans;
}