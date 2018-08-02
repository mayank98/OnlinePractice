#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,a,b;
    cin >> n >> a >> b;
    ll rnd=0;
    a--; b--;
    while(a!=b)
    {
        a/=2;
        b/=2;
        rnd++;
    }
    if((1<<rnd)==n)
        cout << "Final!";
    else
        cout << rnd;
}