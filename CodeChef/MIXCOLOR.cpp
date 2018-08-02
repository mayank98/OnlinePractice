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
        map <ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            if(mp.count(temp)==0)
                mp[temp]=1;
        }
        cout << n-mp.size() << endl;
    }
}