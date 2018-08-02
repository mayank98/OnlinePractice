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
    vector <ll> a(n),cf(n);
    for(i=0;i<n;i++)
        cin >> a[i];
    
    cf[0]=a[n-1];
    for(i=1;i<n;i++)
        cf[i]=cf[i-1]+a[n-1-i];
    
    ll ans=0,currSum=0;
    for(i=0;i<n-1;i++)
    {
        currSum+=a[i];
        ll idx=lower_bound(cf.begin(),cf.begin()+n-1-i,currSum)-cf.begin();
        if(idx<n-1-i && cf[idx]==currSum)
            ans=max(ans,currSum);
    }
    cout << ans;
}