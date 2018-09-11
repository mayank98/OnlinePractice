#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll q;
    cin >> q;
    while(q--)
    {
        ll n,m,k;
        cin >> n >> m >> k;

        if(m>k || n>k)
        {
            cout << -1 << endl;
            continue;
        }

        ll ans;
        ll a=(k-m)%2;
        ll b=(k-n)%2;

        if(a==0 && b==0)
            ans=k;
        else if(a!=0 && b==0)
            ans=k-1;
        else if(a==0 && b!=0)
            ans=k-1;
        else
            ans=k-2;

        cout << ans << endl;
    }
}