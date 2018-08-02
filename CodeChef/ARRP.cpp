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
        vector <ll> sum(n);
        cin >> sum[0];
        for(ll i=1;i<n;i++)
        {
            ll temp;
            cin >> temp;
            sum[i]=sum[i-1]+temp;
        }
        for(ll k=1;k<=n;k++)
        {
            if(sum[n-1]%k!=0)
            {
                cout << 0;
                continue;
            }
            ll partial=sum[n-1]/k;
            ll j,idx=-1;
            for(j=1;j<=k;j++)
            {
                idx=lower_bound(sum.begin()+idx+1,sum.end(),j*partial)-sum.begin();
                if(idx==n || sum[idx]!=j*partial)
                {
                    cout << 0;
                    break;
                }
            }
            if(j==k+1)
                cout << 1;
        }
        cout << endl;
    }
}