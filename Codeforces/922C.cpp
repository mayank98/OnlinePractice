#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b); 
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll n,k;
    cin >> n >> k;

    if(k>42)
    {
        cout << "No";
        return 0;
    }
    // n+1 should be divisible by all 1,2,3,...,k-1,k

    ll ans=1;
    for(ll i=1;i<=k;i++)
        ans=lcm(ans,i);

    if((n+1)%ans==0)
        cout << "Yes";
    else
        cout << "No";
}