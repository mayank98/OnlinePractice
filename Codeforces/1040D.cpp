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
    cin >> n >> k;
    ll l=1,r=n,mid;
    string response;
    default_random_engine generator;
    
    while(true)
    {
        if(r-l+1==4*k)
        {
            uniform_int_distribution <ll> distribution(l,r);
            ll num=distribution(generator);
            cout << num << " " << num << flush;
            cin >> response;
            if(response=="Yes")
                return 0;
        }

        mid=(l+r)/2;

        cout << max((ll)1,l-k) << " " << min(mid+k,n) << flush;
        cin >> response;

        if(response=="Yes")
        {
            l=max((ll)1,l-k);
            r=min(mid+k,n);
            if(l==r)
                return 0;
        }

        else if(response=="No")
        {
            l=max((ll)1,mid-k);
            r=min(r+k,n);
        }

        else
            return 0;
    }
}