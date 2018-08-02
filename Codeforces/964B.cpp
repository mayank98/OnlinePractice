#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,a,b,c,t,i;
    cin >> n >> a >> b >> c >> t;
    
    ll ans=0;
    for(i=0;i<n;i++)
    {
        ll temp;
        cin >> temp;
        ll x=max((ll)0,(c-b)*(t-temp));
        x+=a;
        ans+=x;
    }
    cout << ans;
}