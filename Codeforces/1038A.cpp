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
    string s;    
    cin >> n >> k >> s;

    vector<ll> a(k,0);
    for(ll i=0;i<n;i++)
    {
        a[s[i]-'A']++;
    }

    cout << *min_element(a.begin(), a.end())*k;
}