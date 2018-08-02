#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // cout << fixed << setprecision(16);
    // memset(dp,-1,sizeof(dp));

    vector <tuple<ll,char,ll> > v;
    v.push_back({1,'c',5});
    v.push_back({1,'d',3});
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        get<0>(x)=2323;
        cout << get<0>(x) << endl;
    }
}