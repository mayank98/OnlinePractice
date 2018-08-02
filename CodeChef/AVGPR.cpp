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
        ll i,j,n;
        cin >> n;
        ll a[2005]={0};
        set <ll> s;
        for(i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            s.insert(temp);
            a[temp+1000]++;
        }
        ll ans=0;
        for(i=0;i<2005;i++)
            ans+=(a[i]*(a[i]-1))/2;
        for(i=0;i<2005;i++)
        {
            for(j=i+1;j<2005;j++)
            {
                if(a[i]==0 || a[j]==0)
                    continue;
                if((i+j)&1)
                    continue;
                if(s.find((i+j-2000)/2)!=s.end())
                    ans+=a[i]*a[j];
            }
        }
        cout << ans << endl;
    }
}