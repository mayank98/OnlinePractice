#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,m;
    cin >> n >> m;

    if(m<n-1)
    {
        cout << "Impossible";
        return 0;
    }

    ll i,j,curr=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(__gcd(i,j)==1)
            {
                curr++;
                if(curr==m)
                    break;
            }
        }
        if(j<=n)
            break;
    }

    if(curr<m)
    {
        cout << "Impossible";
        return 0;
    }

    curr=0;
    cout << "Possible\n";
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(__gcd(i,j)==1)
            {
                cout << i << " " << j << endl;
                curr++;
                if(curr==m)
                    break;
            }
        }
        if(j<=n)
            break;
    }
}