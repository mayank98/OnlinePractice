#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll k;
    cin >> k;
    if(k>36)
    {
        cout << -1;
        return 0;
    }

    if(k==0)
    {
        cout << 1;
        return 0;
    }

    for(ll i=0;i<k/2;i++)
        cout << 8;
    if(k&1)
        cout << 4;
}