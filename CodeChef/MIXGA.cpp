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
        ll n,k;
        cin >> n >> k;
        ll i;
        ll a[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                continue;
            if(i&1)
            {
                if(sum>0)
                    sum--;
                else
                    sum++;
            }
            else
            {
                if(sum<0)
                    sum--;
                else
                    sum++;
            }
        }
        if(abs(sum)>=k)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}