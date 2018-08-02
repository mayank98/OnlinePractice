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
    
    // ifstream cin("A-large-practice.in");
    // ofstream cout("output small.o");
    ll t;
    cin >> t;
    for(ll test=1;test<=t;test++)
    {
        cout << "Case #" << test << ": ";
        ll i,n;
        cin >> n;
        ll a[n],b[n];
        for(i=0;i<n;i++)
            cin >> a[i] >> b[i];

        ll p;
        cin >> p;
        for(i=0;i<p;i++)
        {
            ll tmp;
            cin >> tmp;
            ll cnt=0;
            for(ll j=0;j<n;j++)
                if(a[j]<=tmp && tmp<=b[j])
                    cnt++;
            cout << cnt << " ";
        }
        cout << endl;
    }
}