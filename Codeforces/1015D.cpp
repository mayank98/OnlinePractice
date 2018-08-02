#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,k,s;
    cin >> n >> k >> s;

    if((n-1)*k<s || k>s)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";

    ll bound=s/(n-1);
    ll left=s%(n-1);
    map <ll,ll> mp;

    mp.insert({n-1,bound});
    ll moves=bound;
    if(left!=0)
    {
        mp.insert({left,1});
        moves++;
    }
    
    while(moves!=k)
    {
        auto it=mp.rbegin();
        ll val=(it->first)-1;
        (it->second)--;
        if(it->second==0)
            mp.erase(it->first);
        if(mp.count(val)>0)
            mp[val]++;
        else
            mp[val]=1;
        if(mp.count(1)>0)
            mp[1]++;
        else
            mp[1]=1;
        moves++;
    }

    ll direction=1;
    ll currPos=1;
    for(auto it=mp.rbegin();it!=mp.rend();it++)
    {
        ll dis=it->first;
        ll cnt=it->second;
        for(ll i=0;i<cnt;i++)
        {
            currPos+=direction*dis;
            cout << currPos << " ";
            direction*=-1;
        }
    }
}