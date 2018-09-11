#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,m,i,j;
    cin >> n >> m;

    string mat[n];
    for(i=0;i<n;i++)
        cin >> mat[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]=='B')
                break;
        }
        if(j<m)
            break;
    }
    
    ll start=j;
    while(mat[i][j]=='B' && j<m)
        j++;

    ll len=j-start;
    cout << i+(len/2)+1 << " " << start+(len/2)+1;
}