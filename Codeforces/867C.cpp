#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ll n,S;
    cin >> n >> S;
    ll tot_slices=0;
    vector <pair<ll,ll> > pa,pb;
    ll t1=0,t2=0;
    ll happiness=0;
    for(ll i=0;i<n;i++)
    {
        ll s,a,b;
        cin >> s >> a >> b;
        tot_slices+=s;
        if(a>b)
        {
            pa.push_back({a-b,s});
            t1+=s;
            happiness+=a*s;
        }
        else
        {   pb.push_back({b-a,s});
            t2+=s;
            happiness+=b*s;
        }
    }
    
    ll allowed=ceil((1.0*tot_slices)/S);
    ll used=t1+t2+(t1%S>0)+(t2%S>0);
    if(used<=allowed)
    {
        cout << happiness;
        return 0;
    }

    //replacing type 1
    sort(pa.begin(),pa.end());
    ll loss1=0;
    ll give1=t1%S;
    for(ll i=0;i<pa.size() && give1>0;i++)
    {
        ll temp=min(give1,pa[i].second);
        give1-=temp;
        loss1+=temp*(pa[i].first);
    }

    //replacing type 2
    sort(pb.begin(),pb.end());
    ll loss2=0;
    ll give2=t2%S;
    for(ll i=0;i<pb.size() && give2>0;i++)
    {
        ll temp=min(give2,pb[i].second);
        give2-=temp;
        loss2+=temp*(pb[i].first);
    }

    cout << happiness-min(loss1,loss2);
}