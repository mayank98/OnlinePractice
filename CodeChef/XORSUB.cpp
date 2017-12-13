#include <bits/stdc++.h>
using namespace std;

#define N 1024

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,j;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",arr+i);
        int dp[n][N];
        for(j=0;j<N;j++)
            dp[0][j]=0;
        dp[0][0]=1;
        dp[0][arr[0]]=1;
        for(i=1;i<n;i++)
            for(j=0;j<N;j++)
                dp[i][j]=(dp[i-1][j])||(dp[i-1][j^arr[i]]);
        int ans=0;
        for(j=0;j<N;j++)
            ans=max(ans,dp[n-1][j]*(j^k));
        printf("%d\n",ans);
    }
}
