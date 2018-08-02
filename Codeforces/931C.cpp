#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n;
    cin >> n;
    map <ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin >> temp;
        if(mp.count(temp)>0)
            mp[temp]++;
        else
            mp[temp]=1;
    }
    if(mp.size()==1)
    {
        cout << n << endl;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            for(ll i=0;i<(it->second);i++)
                cout << (it->first) << " ";
        }
    }
    else if(mp.size()==2)
    {
        auto it=mp.begin();
        ll a1,cnt1;
        ll a2,cnt2;
        ll a3,cnt3;
        a1=(it->first);
        cnt1=(it->second);
        it++;
        a3=(it->first);
        cnt3=(it->second);
        if(a3-a1==1)
        {
            cout << n << endl;
            for(auto it=mp.begin();it!=mp.end();it++)
            {
                for(ll i=0;i<(it->second);i++)
                    cout << (it->first) << " ";
            }
        }
        else
        {
            a2=(a1+a3)/2;
            cout << abs(cnt1-cnt3) << endl;
            for(ll i=0;i<2*min(cnt1,cnt3);i++)
                cout << a2 << " ";
            ll b=a1;
            if(cnt3>cnt1)
                b=a3;
            for(ll i=0;i<abs(cnt1-cnt3);i++)
                cout << b << " ";
        }
    }
    else
    {
        ll a1,cnt1;
        ll a2,cnt2;
        ll a3,cnt3;
        auto it=mp.begin();
        a1=(it->first);
        cnt1=(it->second);
        it++;
        a2=(it->first);
        cnt2=(it->second);
        it++;
        a3=(it->first);
        cnt3=(it->second);
        ll cc1=cnt2+abs(cnt1-cnt3);
        ll cc2=(cnt2%2)+cnt1+cnt3;

        if(cc1<cc2)
        {
            cout << cc1 << endl;
            for(ll i=0;i<cnt2+(2*min(cnt1,cnt3));i++)
                cout << a2 << " ";
            ll b=a3;
            if(cnt1>cnt3)
                b=a1;
            for(ll i=0;i<abs(cnt1-cnt3);i++)
                cout << b << " ";
        }
        else
        {
            cout << cc2 << endl;
            for(ll i=0;i<cnt2%2;i++)
                cout << a2 << " ";
            for(ll i=0;i<cnt1+(cnt2/2);i++)
                cout << a1 << " ";
            for(ll i=0;i<cnt3+(cnt2/2);i++)
                cout << a3 << " ";
        }
    }
}