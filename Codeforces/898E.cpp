#include "bits/stdc++.h"
using namespace std;

#define ll long long

bool is_square(ll a)
{
    ll k=sqrt(a);
    return a==k*k;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    ll n;
    cin >> n;
    vector <ll> a(n);
    vector <bool> state(n);
    ll goal=(n/2);
    ll num_sq=0;
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
        state[i]=is_square(a[i]);
        if(state[i])
            num_sq++;
    }

    if(num_sq==goal)
        cout << 0;
    else if(num_sq>goal)
    {
        ll ans=0;
        ll rem=num_sq-goal;
        multiset <ll> st;
        for(ll i=0;i<n;i++)
        {
            if(!state[i]) continue;
            if(a[i]==0)
                st.insert(2);
            else
                st.insert(1);
        }
        for(auto it=st.begin();it!=st.end() && rem>0;it++)
        {
            rem--;
            ans+=(*it);
        }
        cout << ans;
    }
    else
    {
        ll ans=0;
        ll rem=goal-num_sq;
        multiset <ll> st;
        for(ll i=0;i<n;i++)
        {
            if(state[i]) continue;
            ll k=a[i];
            ll root=sqrt(a[i]);
            st.insert(min(k-(root*root),((root+1)*(root+1))-k));
        }
        for(auto it=st.begin();it!=st.end() && rem>0;it++)
        {
            rem--;
            ans+=(*it);
        }
        cout << ans;
    }
}