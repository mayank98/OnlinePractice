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
    if(n<3)
    {
        cout << "No";
        return 0;
    }

    if(n&1 || n%4==0)
    {
        cout << "Yes\n";
        cout << "1 " << n << endl;
        cout << n-1 << " ";
        for(ll i=1;i<n;i++)
            cout << i << " ";
        return 0;
    }

    cout << "Yes\n";
    cout << "1 " << n/2 << endl;
    cout << n-1 << " ";
    for(ll i=1;i<=n;i++)
    {
        if(i!=n/2)
            cout << i << " ";
    }
    return 0;
}