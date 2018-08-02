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
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
        if(!(a[i]&1))
            a[i]--;
    }
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";
}