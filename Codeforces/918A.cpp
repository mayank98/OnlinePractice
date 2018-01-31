#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n;
    cin >> n;
    ll a[1005];
    a[1]=1;
    a[2]=1;
    set <ll> s;
    s.insert(1);
    for(ll i=3;i<=1000;i++)
    {
        a[i]=a[i-1]+a[i-2];
        s.insert(a[i]);
    }

    for(ll i=1;i<=n;i++)
    {
        if(s.find(i)==s.end())
            cout << "o";
        else
            cout << "O";
    }
}