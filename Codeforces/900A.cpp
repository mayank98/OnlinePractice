#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll n;
    cin >> n;
    ll x[n],y[n];
    for(ll i=0;i<n;i++)
        cin >> x[i] >> y[i];
    ll cnt=0;
    for(ll i=0;i<n;i++)
        if(x[i]>0) cnt++;
    if(cnt==0 || cnt==1 || cnt==n-1 || cnt==n)
        printf("Yes");
    else
        printf("No");
}