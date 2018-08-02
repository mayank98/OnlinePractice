#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll n,k;
    cin >> n >> k;
    cout << (n/(k+1))*2 + min((ll)2,n%(k+1));
}