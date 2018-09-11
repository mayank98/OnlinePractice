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
        ll n,k,x;
        cin >> n >> k >> x;
        ll i,p[k];
        ll sum=0;
        for(i=0;i<k;i++)
        {
            cin >> p[i];
            sum+=p[i];
        }
        sort(p,p+k);
        
        ll left=n-k;
        ll start=p[0]+x+1;
        ll limit,idx=k-1;
        while(left>0)
        {
            limit=p[idx];
            ll num=start-limit-1;
            ll z=min(num,left);
            left-=z;
            sum+=(z*start)-((z*(z+1))/2);
            start=p[idx];
            idx--;
        }
        cout << sum << endl;
    }
}