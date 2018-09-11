#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,k;
    cin >> n >> k;
    string t,s;
    cin >> t;
    s=t;

    ll i,j;
    for(i=0;i<=s.size() && k>0;i++)
    {
        if(i==s.size())
        {
            s+=t;
            k--;
            continue;
        }

        ll end=min(n+i,(ll)s.size());
        for(j=i;j<end;j++)
            if(s[j]!=t[j-i])
                break;

        if(j!=end)
            continue;

        s+=t.substr(j-i);
        k--;
    }

    cout << s;
}