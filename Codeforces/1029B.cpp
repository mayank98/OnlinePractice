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
    for(i=0;i<n;i++)
        cin >> a[i];

    ll len=1;
    ll ans=1;
    for(i=1;i<n;i++)
    {
        if(a[i]<=2*a[i-1])
            len++;
        else
        {
            ans=max(ans,len);
            len=1;
        }
    }
    ans=max(ans,len);
    cout << ans;
}