#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    cout << fixed << setprecision(16);

    ll k,n,i;
    cin >> n >> k;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        a[i]=a[i]%k;
    }
    ll fact=a[0];
    for(i=1;i<n;i++)
        fact=__gcd(fact,a[i]);
    
    set <ll> s;
    for(i=0;;i++)
    {
        ll x=(fact*i)%k;
        if(s.find(x)==s.end())
            s.insert(x);
        else
            break;
    }

    cout << s.size() << endl;
    for(auto x:s)
        cout << x << " ";
}