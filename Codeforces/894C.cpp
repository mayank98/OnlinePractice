#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll m;
    cin >> m;
    set <ll> s;
    for(ll i=0;i<m;i++)
    {
        ll temp;
        cin >> temp;
        s.insert(temp);
    }
    vector <ll> a(s.begin(),s.end());
    ll factor=a[0];
    for(ll i=0;i<m;i++)
    {
        if(a[i]%factor!=0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << 2*m-1 << endl;
    printf("%lld ",factor);
    for(ll i=1;i<m;i++)
        printf("%lld %lld ",a[i],factor); 
}