#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector <pair<ll,ll> > c(50);

bool compare(pair <ll,ll> a,pair <ll,ll> b)
{
    double r1=(1.0*a.first)/a.second;
    double r2=(1.0*b.first)/b.second;
    if(r1==r2)
        return a.second>b.second;
    return r1<r2;
}

ll cost(ll qty,ll idx)
{
    ll capacity=c[idx].second;
    ll price=c[idx].first;

    ll num=qty/capacity;
    ll rem=qty%capacity;

    if(rem==0)
        return num*price;
    return num*price+min(price,cost(rem,idx+1));
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n,l;
    cin >> n >> l;
    c.resize(n);
    for(ll i=0;i<n;i++)
    {
        cin >> c[i].first;
        c[i].second=(1<<i);
    }
    sort(c.begin(),c.end(),compare);

    cout << cost(l,0);
}