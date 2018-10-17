#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(a-b!=1)
        {
            cout << "NO\n";
            continue;
        }

        ll n=a+b;
        bool isprime=true;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                isprime=false;
                break;
            }
        }

        if(!isprime)
        {
            cout << "NO\n";
            continue;
        }
        
        cout << "YES\n";
    }
}