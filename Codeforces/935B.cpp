#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll n,i;
    cin >> n;
    string s;
    cin >> s;
    ll money=0;
    ll x=0,y=0;
    if(s[0]=='R')
        x+=1;
    else
        y+=1;
    bool side=(x>y);
    for(i=1;i<n;i++)
    {
        if(s[i]=='R')
            x+=1;
        else
            y+=1;
        if(x>y && !side)
        {
            money++;
            side=(!side);
        }
        if(x<y && side)
        {
            money++;
            side=(!side);
        }
    }
    cout << money;
}