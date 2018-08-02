#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,k;
    cin >> n >> k;
    ll i,a[n],t[n];
    
    ll sum=0;
    cin >> a[0];
    for(i=1;i<n;i++)
    {
        cin >> a[i];
        // a[i]+=a[i-1];
    }

    cin >> t[0];
    for(i=1;i<n;i++)
    {
        cin >> t[i];
        // t[i]+=t[i-1];
    }
    for(i=0;i<n;i++)
    {
        if(t[i]==1)
            sum+=a[i];
    }

    ll gain=0;
    for(i=0;i<k;i++)
    {
        if(t[i]==0)
            gain+=a[i];
    }
    ll ans=gain;
    for(i=1;i<n-k+1;i++)
    {
        if(t[i-1]==0)
            gain-=a[i-1];
        if(t[i+k-1]==0)
            gain+=a[i+k-1];
        ans=max(ans,gain);
    }

    cout << sum+ans;
}