#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,m;
    cin >> n >> m;
    ll i,l[n],r[n];
    for(i=0;i<n;i++)
        cin >> l[i] >> r[i];

    vector <ll> ans;
    ll cnt=0;
    for(i=1;i<=m;i++)
    {
        ll j;
        for(j=0;j<n;j++)
            if(l[j]<=i && i<=r[j])
                break;
        if(j==n)
        {
            cnt++;
            ans.push_back(i);
        }
    }

    cout << cnt << endl;
    for(auto x:ans)
        cout << x << " ";
}