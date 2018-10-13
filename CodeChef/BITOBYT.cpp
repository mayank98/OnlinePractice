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
        ll n;
        cin >> n;
        n--;

        ll rem=n%26;
        ll val=pow(2,n/26);

        if(rem<2)
            cout << val << " 0 0" << endl;
        else if(10<=rem)
            cout << "0 0 " << val << endl;
        else
            cout << "0 " << val << " 0" << endl;
    }
}