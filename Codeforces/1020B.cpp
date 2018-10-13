#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n;
    cin >> n;
    ll p[n+1];

    for(i=1;i<=n;i++)
        cin >> p[i];

    for(i=1;i<=n;i++)
    {
        ll curr=i;
        vector <bool> visited(n+1,false);
        // visited[curr]=true;
        for(ll j=0;j<n;j++)
        {
            if(visited[curr])
                break;
            else
                visited[curr]=true;
            curr=p[curr];
        }
        cout << curr << " ";
    }
}