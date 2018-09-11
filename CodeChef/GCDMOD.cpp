#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll fastModExp(ll base,ll power,ll rem)
{
    if(power==0)
        return 1;
    ll a=fastModExp(base,power/2,rem);
    a=(a*a)%rem;
    if(power&1)
        return (a*base)%rem;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,n;
        cin >> a >> b >> n;
        if(a==b)
        {
            cout << (fastModExp(a,n,MOD)*2)%MOD << endl;
            continue;
        }

        ll ans=0;
        ll i,num=abs(a-b);
        
        for(i=1;i*i<=num;i++)
        {
            if(num%i!=0)
                continue;
            
            ll k=i;
            if((fastModExp(a,n,k)+fastModExp(b,n,k))%k==0)
                ans=max(ans,k);

            k=num/i;
            if((fastModExp(a,n,k)+fastModExp(b,n,k))%k==0)
                ans=max(ans,k);
        }
        cout << ans%MOD << endl;
    }
}