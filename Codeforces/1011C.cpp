#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    cout << fixed << setprecision(16);

    ll n,i;
    double m,fact=1;
    cin >> n >> m;
    for(i=0;i<2*n;i++)
    {
        double temp;
        cin >> temp;
        if(temp==1)
        {
            cout << -1;
            return 0;
        }
        fact*=temp/(temp-1);
    }
    cout << (fact-1)*m;
}