#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(12);

    string s;
    cin >> s;
    double n=s.size();
    
    vector <ll> alpha[26];
    for(ll i=0;i<n;i++)
        alpha[s[i]-'a'].push_back(i);

    double ans=0;
    for(ll i=0;i<26;i++)
    {
        double temp=0;
        for(ll shift=0;shift<n;shift++)
        {
            ll cnt[26]={0};
            for(auto idx:alpha[i])
                cnt[s[(idx+shift)%((ll)n)]-'a']++;
            ll temp2=0;
            for(ll j=0;j<26;j++)
                if(cnt[j]==1)
                    temp2++;
            temp=max(temp,temp2/n);
        }
        ans+=temp;
    }
    
    cout << ans;
}