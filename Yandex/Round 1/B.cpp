#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    string str,s;
    cin >> str;
    s="0123456789";
    ll cnt=0;
    ll n=str.size();

    do
    {
        ll j=0;
        for(ll i=0;i<n;i++)
        {
            if(str[i]==s[j])
                j++;
            if(j==10) break;
        }
        if(j==10)
            cnt++;
    }
    while(next_permutation(s.begin(),s.end()));
    
    cout << cnt;
}