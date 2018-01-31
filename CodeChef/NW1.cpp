#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        ll w;
        string s;
        cin >> w >> s;
        vector <ll> v(7,4);
        ll idx;
        if(s=="mon") idx=0;
        if(s=="tues") idx=1;
        if(s=="wed") idx=2;
        if(s=="thurs") idx=3;
        if(s=="fri") idx=4;
        if(s=="sat") idx=5;
        if(s=="sun") idx=6;
        for(ll i=idx;i<idx+w-28;i++)
            v[i%7]++;
        for(ll i=0;i<7;i++)
            cout << v[i] << " ";
        cout << endl;
    }
}