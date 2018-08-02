#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n;
    cin >> n;
    // ll i,j,k,m[4][n][n];
    ll i,j,k;
    string m[4][n];
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<n;j++)
            cin >> m[i][j];
            // for(k=0;k<n;k++)
                // cin >> m[i][j][k];
    }

    ll a[]={0,1,2,3};
    
    ll ans=99999999999;
    // ll mat[2*n][2*n];
    char mat[2*n][2*n];

    char type[2][2*n];
    for(i=0;i<2*n;i++)
    {
        if(i&1)
            type[0][i]='0';
        else
            type[0][i]='1';
    }
    for(i=0;i<2*n;i++)
    {
        if(i&1)
            type[1][i]='1';
        else
            type[1][i]='0';
    }
    do
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                mat[i][j]=m[a[0]][i][j];
        for(i=0;i<n;i++)
            for(j=n;j<2*n;j++)
                mat[i][j]=m[a[1]][i][j%n];
        for(i=n;i<2*n;i++)
            for(j=0;j<n;j++)
                mat[i][j]=m[a[2]][i%n][j];
        for(i=n;i<2*n;i++)
            for(j=n;j<2*n;j++)
                mat[i][j]=m[a[3]][i%n][j%n];

        ll miss=0;
        for(i=0;i<2*n;i++)
        {
            k=i%2;
            for(j=0;j<2*n;j++)
            {
                if(mat[i][j]!=type[k][j])
                    miss++;
            }
        }
        ans=min(ans,miss);
        
        miss=0;
        for(i=0;i<2*n;i++)
        {
            k=1-(i%2);
            for(j=0;j<2*n;j++)
            {
                if(mat[i][j]!=type[k][j])
                    miss++;
            }
        }
        ans=min(ans,miss);
    }
    while(next_permutation(a,a+4));

    cout << ans;
}