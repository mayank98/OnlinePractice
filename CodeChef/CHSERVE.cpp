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
        ll k,p1,p2;
        cin >> p1 >> p2 >> k;

        ll val=(p1+p2)/k;
        if(val&1)
        	cout << "COOK\n";
        else
        	cout << "CHEF\n";
    }
}