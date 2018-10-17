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

    string mat2[n];
    for(i=0;i<n;i++)
    {
        mat2[i]="";
        for(j=0;j<m;j++)
            mat2[i]+=".";
    }

    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            bool paint=true;
            if(mat[i-1][j]=='.')
                paint=false;
            if(mat[i+1][j]=='.')
                paint=false;
            if(mat[i][j-1]=='.')
                paint=false;
            if(mat[i][j+1]=='.')
                paint=false;
            if(mat[i+1][j+1]=='.')
                paint=false;
            if(mat[i+1][j-1]=='.')
                paint=false;
            if(mat[i-1][j+1]=='.')
                paint=false;
            if(mat[i-1][j-1]=='.')
                paint=false;

            if(!paint)
                continue;

            mat2[i][j+1]='#';
            mat2[i][j-1]='#';
            mat2[i+1][j]='#';
            mat2[i-1][j]='#';
            mat2[i-1][j+1]='#';
            mat2[i-1][j-1]='#';
            mat2[i+1][j-1]='#';
            mat2[i+1][j+1]='#';
        }
    }

    bool poss=true;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]!=mat2[i][j])
            {
                poss=false;
                break;
            }
        }
    }

    if(poss)
        cout << "YES";
    else
        cout << "NO";
}