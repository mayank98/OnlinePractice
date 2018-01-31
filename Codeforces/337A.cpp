#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll m,n;
    cin >> n >> m;
    ll f[m];
    for(ll i=0;i<m;i++)
        cin >> f[i];
    sort(f,f+m);
    ll ans=10000;
    for(ll i=0;i+n<=m;i++)
        ans=min(ans,f[i+n-1]-f[i]);
    cout << ans;
}