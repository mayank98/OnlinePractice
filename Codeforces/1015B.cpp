#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    vector <ll> s1(26,0),t1(26,0);
    for(i=0;i<n;i++)
    {
        s1[s[i]-'a']++;
        t1[t[i]-'a']++;
    }

    if(s1!=t1)
    {
        cout << -1;
        return 0;
    }

    ll cnt=0;
    vector <ll> ans;
    for(i=0;i<n;i++)
    {
        char c1=s[i],c2=t[i];
        if(c1==c2)
            continue;
        ll j;
        for(j=i+1;j<n;j++)
            if(s[j]==t[i])
                break;
        for(ll k=j-1;k>=i;k--)
        {
            cnt++;
            ans.push_back(k);
            swap(s[k],s[k+1]);
        }
    }

    cout << cnt << endl;
    for(auto x:ans)
        cout << x+1 << " ";
}