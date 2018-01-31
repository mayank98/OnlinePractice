#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll n;
    cin >> n;
    ll a[n];
    ll num_ones=0;
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            num_ones++;
            a[i]=-1;
        }
        else
            a[i]=1;
    }
    ll dp[n],ans;
    ans=(dp[0]=a[0]);
    for(ll i=1;i<n;i++)
    {
        dp[i]=max(a[i],a[i]+dp[i-1]);
        ans=max(ans,dp[i]);
    }
    cout << num_ones+ans;
}