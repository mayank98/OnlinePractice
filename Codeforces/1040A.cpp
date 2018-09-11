#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n,a,b;
    cin >> n >> a >> b;

    ll arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];

    ll cost=0;
    if(n&1)
        if(arr[n/2]==2)
            cost+=min(a,b);

    for(i=0;i<n-1-i;i++)
    {
        if(arr[i]==2 && arr[n-1-i]==2)
            cost+=2*min(a,b);
        else if(arr[i]==0 && arr[n-1-i]==1)
            {cout << -1; return 0;}
        else if(arr[i]==0 && arr[n-1-i]==2)
            cost+=a;
        else if(arr[i]==1 && arr[n-1-i]==0)
            {cout << -1; return 0;}
        else if(arr[i]==1 && arr[n-1-i]==2)
            cost+=b;
        else if(arr[i]==2 && arr[n-1-i]==0)
            cost+=a;
        else if(arr[i]==2 && arr[n-1-i]==1)
            cost+=b;
    }

    cout << cost;
}