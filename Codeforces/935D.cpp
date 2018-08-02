#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll n,m;
ll s1[100005];
ll s2[100005];

ll fastModExp(ll base,ll power)
{
    if(power==0)
        return 1;
    ll a=fastModExp(base,power/2);
    a=(a*a)%MOD;
    if(power&1)
        return (a*base)%MOD;
    return a;
}

ll solve(ll be)
{
    ll i=be;
    while(s1[i]==s2[i] && s1[i]!=0 && i<n)
        i++;
    if(i==n)
        return 0;

    if(s1[i]!=0 && s2[i]!=0)
    {
        if(s2[i]<s1[i])
            return 1;
        else
            return 0;
    }

    else if(s1[i]!=0 && s2[i]==0)
    {
        ll k=s1[i]-1;
        ll p=solve(i+1);
        ll tmp1=(k+p)%MOD;
        ll tmp2=fastModExp(m,MOD-2);
        return (tmp1*tmp2)%MOD;
    }

    else if(s1[i]==0 && s2[i]!=0)
    {
        ll k=m-s2[i];
        ll p=solve(i+1);
        ll tmp1=(k+p)%MOD;
        ll tmp2=fastModExp(m,MOD-2);
        return (tmp1*tmp2)%MOD;
    }

    else
    {
        ll k=m-1;
        ll p=solve(i+1);
        ll tmp1=(k+(2*p))%MOD;
        ll tmp2=fastModExp(2*m,MOD-2);
        return (tmp1*tmp2)%MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll i;
    cin >> n >> m;
    for(i=0;i<n;i++)
        cin >> s1[i];
    for(i=0;i<n;i++)
        cin >> s2[i];

    ll ans=solve(0);
    cout << ans;
}