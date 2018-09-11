#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

// calculates ceiling of fraction p/q.
ll ceiling(ll p,ll q)
{
    bool neg=(p<0);
    if(neg)
        p=-p;

    ll rem=p%q;
    ll ans=p/q;

    if(rem!=0)
        ans++;

    if(neg)
    {
        if(rem==0)
            return -ans;
        return -ans+1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll p,k;
    cin >> p >> k;

    if(p<k)
    {
        cout << "1\n" << p;
        return 0;
    }

    ll i;
    ll a[100];
    a[0]=ceiling(-p,k);

    for(i=1;;i++)
    {
        a[i]=ceiling(-a[i-1],k);
        if(a[i]==0)
            break;
    }

    ll d=i;
    cout << d+1 << endl << p+(k*a[0]) << " ";
    for(i=1;i<d;i++)
        cout << a[i-1]+(k*a[i]) << " ";
    cout << a[i-1];
}