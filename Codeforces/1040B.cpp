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
    if(2*k>=n-1)
    {
        cout << "1\n";
        cout << (n+1)/2;
        return 0;
    }

    ll rem=n%((2*k)+1);
    ll quot=n/((2*k)+1);
    
    if(rem>k)
    {
        cout << quot+1 << endl;
        for(ll i=0;i<quot;i++)
            cout << i*((2*k)+1)+(k+1) << " ";
        cout << (n+k+1)-rem;
        return 0;
    }

    if(rem==0)
    {
        cout << quot << endl;
        for(ll i=0;i<quot;i++)
            cout << i*((2*k)+1)+(k+1) << " ";
        return 0;
    }

    cout << quot+1 << endl;
    cout << "1 ";
    for(ll i=1;i<quot;i++)
        cout << i*((2*k)+1)+1 << " ";
    cout << (n+k+1)-(rem+k);
    return 0;
}