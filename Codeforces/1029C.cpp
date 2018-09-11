#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,i;
    cin >> n;
    ll a[n][2];
    for(i=0;i<n;i++)
        cin >> a[i][0] >> a[i][1];

    ll left[n][2];
    left[0][0]=a[0][0];
    left[0][1]=a[0][1];

    for(i=1;i<n;i++)
    {
        ll l=max(a[i][0],left[i-1][0]);
        ll r=min(a[i][1],left[i-1][1]);
        if(r<l)
        {
            left[i][0]=-1;
            left[i][1]=-1;
        }
        else
        {
            left[i][0]=l;
            left[i][1]=r;
        }
    }

    ll right[n][2];
    right[n-1][0]=a[n-1][0];
    right[n-1][1]=a[n-1][1];

    for(i=n-2;i>=0;i--)
    {
        ll l=max(a[i][0],right[i+1][0]);
        ll r=min(a[i][1],right[i+1][1]);
        if(r<l)
            right[i][0]=(right[i][1]=-1);
        else
        {
            right[i][0]=l;
            right[i][1]=r;
        }
    }

    ll ans=0;
    for(i=1;i<n-1;i++)
    {
        ll l=max(left[i-1][0],right[i+1][0]);
        ll r=min(left[i-1][1],right[i+1][1]);
        ans=max(ans,r-l);
    }
    ans=max({ans,left[n-2][1]-left[n-2][0],right[1][1]-right[1][0]});
    cout << ans;
}