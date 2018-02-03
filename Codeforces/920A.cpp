#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll a[k];
        ll i;
        for(i=0;i<k;i++)
            cin >> a[i];
        ll ans;
        set <ll> s;
        for(ans=1;;ans++)
        {
            for(i=0;i<k;i++)
            {
                if(a[i]-ans+1>0)
                    s.insert(a[i]-ans+1);
                if(a[i]+ans-1<n+1)
                    s.insert(a[i]+ans-1);
            }
            if(s.size()==n)
            {
                cout << ans << endl;
                break; 
            }
        }
    }
}