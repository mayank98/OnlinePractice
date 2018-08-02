#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n;
    cin >> n;
    ll depth[n+1];
    ll temp;
    depth[1]=1;
    for(ll i=2;i<=n;i++)
    {
        cin >> temp;
        depth[i]=1+depth[temp];
    }
    ll cnt_at_depth[n+1]={0};
    for(ll i=1;i<=n;i++)
        cnt_at_depth[depth[i]]++;
    ll ans=0;
    for(ll i=1;i<=n;i++)
        ans+=cnt_at_depth[i]%2;
    cout << ans;
}