#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,m;
    cin >> n >> m;
    ll pts=0;
    ll a[n]={0};
    for(ll i=0;i<m;i++)
    {
        ll c;
        cin >> c;
        a[c-1]++;
        ll k = *min_element(a,a+n);
        pts+=k;
        for(ll j=0;j<n;j++)
            a[j]-=k;
    }
    cout << pts;
}