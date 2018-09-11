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
    ll a[n];

    bool zero=false;
    for(i=0;i<n;i++)
    {cin >> a[i]; if(a[i]==0) zero=true;}

    sort(a,a+n);
    ll rem=n-1;

    i=0;
    while(a[i]<0 && i<n-1)
    {
        a[i]=-a[i];
        rem--;
        i++;
    }

    ll ans=0;
    if(rem&1)
    {
        if(i==n-1)
        {
            a[n-2]=-a[n-2];
            for(ll j=0;j<n;j++)
                ans+=a[j];
            cout << ans;
            return 0;
        }
        else if(a[i]==0)
        {
            for(i=0;i<n;i++)
                ans+=a[i];
            cout << ans;
            return 0;
        }
        else
        {
            if(i==0)
                a[0]=-a[0];
            else
                ans-=2*min(a[i],a[i-1]);
            for(i=0;i<n;i++)
                ans+=a[i];
            cout << ans;
            return 0;
        }
    }

    for(i=0;i<n;i++)
        ans+=a[i];
    cout << ans;
    return 0;
}