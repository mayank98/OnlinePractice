#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,L,a;
    cin >> n >> L >> a;
    
    if(n==0)
    {
        cout << L/a;
        return 0;
    }

    ll i;
    vector <pair<ll,ll> > x(n);
    for(i=0;i<n;i++)
    {
        cin >> x[i].first >> x[i].second;
    }

    sort(x.begin(), x.end());
    ll ans=(x[0].first)/a;

    for(i=1;i<n;i++)
    {
        ans+=(x[i].first-x[i-1].first-x[i-1].second)/a;
    }

    ans+=(L-x[n-1].first-x[n-1].second)/a;

    cout << ans;
}