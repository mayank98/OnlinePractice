#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed;
    // cout << setprecision(16);
    
    ll n,d;
    cin >> n >> d;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    ll cnt=1005;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            if(a[j]-a[i]>d)
                continue;
            cnt=min(cnt,n-(j-i+1));
        }    
    }
    cout << cnt;
}