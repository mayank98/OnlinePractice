#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,k;
    cin >> n >> k;
    
    if(k%n==0)
        cout << (k/n);
    else
        cout << (k/n)+1;
}