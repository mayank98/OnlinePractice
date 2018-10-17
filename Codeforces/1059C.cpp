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

    ll k=n;
    ll val=1;
    
    while(k>0)
    {
        if(k==1)
        {
            cout << val;
            break;
        }

        if(k==2)
        {
            cout << val << " " << 2*val;
            break;
        }

        if(k==3)
        {
            cout << val << " " << val << " " << 3*val;
            break;
        }

        for(ll i=0;i<(k+1)/2;i++)
            cout << val << " ";
        
        val*=2;
        k=k/2;
    }
}