#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000009

ll fastModExp(ll base,ll power)
{
    if(base==0)
        return 0;
    // if(base<0)
    // {
    //     if(power&1)
    //         return MOD-fastModExp(-base,power);
    //     return fastModExp(-base,power);
    // }
    if(power==0)
        return 1;
    ll a=fastModExp(base,power/2);
    a=(a*a)%MOD;
    if(power&1)
        return (a*base)%MOD;
    return a;
}

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        // q is quotient
        ll q = a / m;
        ll t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = y;
 
        // Update y and x
        y = x - q * y;
        x = t;
    }
 
    // Make x positive
    if (x < 0)
       x += m0;
 
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    ll n,a,b,k;
    cin >> n >> a >> b >> k;

    string s;
    cin >> s;

    ll i;
    ll sum=0;
    if(a==b)
    {
        for(auto c:s)
        {
            if(c=='+')
                sum++;
            else
                sum--;
        }
        ll temp=fastModExp(a,n);
        temp=(temp*((n+1)/k))%MOD;
        temp=(temp*sum)%MOD;
        temp=(temp+MOD)%MOD;
        cout << temp;
        return 0;
    }

    for(i=0;i<k;i++)
    {
        ll mul;
        if(s[i]=='+')
            mul=1;
        else
            mul=-1;

        ll temp=(fastModExp(a,n-i)*fastModExp(b,i))%MOD;
        temp=(temp*mul)%MOD;
        temp=(temp+MOD)%MOD;
        sum=(sum+temp)%MOD;
    }
    sum=(sum+MOD)%MOD;


    ll x1=fastModExp(a,MOD-2);
    x1=(x1*b)%MOD;

    ll x2=(fastModExp(x1,k)+MOD-1)%MOD;;
    x1=(fastModExp(x1,n+1)+MOD-1)%MOD;

    ll x3=(x1*fastModExp(x2,MOD-2))%MOD;

    cout << (x3*sum)%MOD;

}