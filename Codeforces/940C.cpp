#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed;
    // cout << setprecision(16);
    
    ll n,k,i;
    cin >> n >> k;
    string str;
    cin >> str;

    set <char> s;
    for(i=0;i<n;i++)
        s.insert(str[i]);
    
    if(s.size()==1 || k>n)
    {
        string ans=str;
        for(i=0;i<k-n;i++)
            ans+=(*(s.begin()));
        cout << ans;
        return 0;
    }

    string ans="";
    for(i=k-1;i>=0;i--)
    {
        auto it=s.upper_bound(str[i]);
        if(it!=s.end())
        {
            for(ll j=0;j<i;j++)
                ans+=str[j];
            ans+=(*it);
            for(ll j=i+1;j<k;j++)
                ans+=(*(s.begin()));
            cout << ans;
            return 0;
        }
    }
}