#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n,m;
    cin >> n >> m;
    ll a[n],b[n];
    ll diff[n];
    ll tot=0;
    for(i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        tot+=a[i];
        diff[i]=b[i]-a[i];
    }
    sort(diff,diff+n);

    for(i=0;i<n;i++)
    {
        if(tot<=m)
            break;
        tot+=diff[i];
    }
    if(tot>m)
        cout << -1;
    else
        cout << i;
}