#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n;
    cin >> n;

    ll indexof[n+1];
    ll a[n+1];
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
        indexof[a[i]]=i;
    }

    bool dp[n+1];
    dp[n]=false;

    for(i=n-1;i>0;i--)
    {
        ll idx=indexof[i];

        dp[i]=true;
        for(ll j=idx+i;j<=n;j+=i)
        {
            if(a[j]<=i)
                continue;

            dp[i]=dp[i]&&dp[a[j]];
        }

        for(ll j=idx-i;j>0;j-=i)
        {
            if(a[j]<=i)
                continue;

            dp[i]=dp[i]&&dp[a[j]];
        }
        dp[i]=!dp[i];
    }

    for(i=1;i<=n;i++)
    {
        if(dp[a[i]])
            cout << "A";
        else
            cout << "B";
    }
}