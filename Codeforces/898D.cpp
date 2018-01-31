#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    ll n,m,k;
    cin >> n >> m >> k;
    // vector <ll> a;
    // for(ll i=0;i<n;i++)
    // {
    //     ll temp;
    //     cin >> temp;
    //     a.push_back(temp);
    // }
    // sort(a.begin(),a.end());
    // ll ans=0;
    // for(ll i=1;i<=a[n-1];i++)
    // {
    //     ll lb=i,ub=i+m-1;
    //     ll idx1=lower_bound(a.begin(),a.end(),lb)-a.begin();
    //     ll idx2=upper_bound(a.begin(),a.end(),ub)-a.begin();
    //     if(idx2-idx1<k) continue;
    //     ll del=idx2-idx1-(k-1);
    //     ans+=del;
    //     for(ll j=idx2-1;j>=idx1 && del>0;j--)
    //     {
    //         a[j]=-1;
    //         del--;
    //     }
    //     sort(a.begin(),a.end());
    // }
    // cout << ans;
    if(k==1)
    {
        cout << n;
        return 0;
    }
    set <ll> a;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin >> temp;
        a.insert(temp);
    }
    // sort(a.begin(),a.end());
    ll ans=0;
    ll val=*(a.rbegin());
    for(ll i=1;i<=val;i++)
    {
        ll lb=i,ub=i+m-1;
        auto idx1=a.lower_bound(lb);
        auto idx2=a.upper_bound(ub);
        ll dis=distance(idx1,idx2);
        if(dis<k) continue;
        ll del=dis-(k-1);
        ans+=del;
        // for(ll j=0;j<k-1;j++)
        //     idx1++;
        // if(idx1==idx2)
        //     continue;
        // a.erase(idx1,idx2);
        auto it=idx2;
        // it--;
        // idx1--;
        // for(;it!=idx1 && del>0;it--)
        // {
        //     // a.erase(it);
        //     del--;
        // }
        while(del>0) {it--;del--;}
        if(it==idx2)
            continue;
        a.erase(it,idx2);
    }
    cout << ans;
}