#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

	ll a,b,x,y;
	cin >> a >> b >> x >> y;

	ll gcd=__gcd(x,y);
	ll k=min(a/(x/gcd),b/(y/gcd));

	cout << k;
}