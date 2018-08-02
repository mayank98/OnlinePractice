#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll s[n];
        for(ll i=0;i<n;i++)
            cin >> s[i];
        
        ll sum[n],sum_rev[n];
        sum[0]=s[0];
        sum_rev[0]=s[n-1];
        for(ll i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+s[i];
            sum_rev[i]=sum_rev[i-1]+s[n-1-i];
        }
        ll j_greater_than_i[n];
        ll j_smaller_than_i[n];
        
        for(ll i=0;i<n-1;i++)
            j_greater_than_i[i]=sum_rev[i]+s[n-1-i];
        for(ll i=0;i<n-1;i++)
            j_smaller_than_i[i]=sum[i]+s[i];

        for(ll i=0;i<n;i++)
        {

        }
    }
}