#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll x,d;
    cin >> x >> d;
    ll done=0,a=1;
    vector <ll> ans;
    for(ll i=1;i<30;i++)
    {
        if((x>>i)&1)
        {
            for(ll j=0;j<i;j++)
                ans.push_back(a);
            a+=d;
            done+=pow(2,i)-1;
        }
    }
    for(ll i=0;i<x-done;i++)
    {
        ans.push_back(a);
        a+=d;
    }
    cout << ans.size() << endl;
    for(auto x:ans)
        cout << x << " ";
}