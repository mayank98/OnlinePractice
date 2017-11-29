#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,p,q,r;
    cin >> n >> p >> q >> r;
    long long i,arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    long long dp[n][3];
    dp[0][0]=p*arr[0];
    dp[0][1]=(p+q)*arr[0];
    dp[0][2]=(p+q+r)*arr[0];
    for(i=1;i<n;i++)
    {
        dp[i][0]=max(dp[i-1][0],p*arr[i]);
        dp[i][1]=max(dp[i-1][1],q*arr[i]+dp[i][0]);
        dp[i][2]=max(dp[i-1][2],r*arr[i]+dp[i][1]);
    }
    cout << dp[n-1][2];
}