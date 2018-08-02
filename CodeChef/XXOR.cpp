#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll n,q;
    cin >> n >> q;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll ones[n][31];

    for(ll i=0;i<31;i++)
    {
        ones[0][i]=0;
        if((a[0]>>i)&1)
            ones[0][i]=1;
        for(ll j=1;j<n;j++)
        {
            ones[j][i]=ones[j-1][i];
            if((a[j]>>i)&1)
                ones[j][i]++;
        }
    }

    while(q--)
    {
        ll l,r;
        cin >> l >> r;
        l--; r--;

        ll ans=0;
        for(ll i=0;i<31;i++)
        {
            ll num_ones;
            if(l==0)
                num_ones=ones[r][i];
            else
                num_ones=ones[r][i]-ones[l-1][i];
            if((r-l+1)-num_ones>num_ones)
                ans+=(1<<i);
        }
        cout << ans << endl;
    }
}