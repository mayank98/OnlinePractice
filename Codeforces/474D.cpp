#include <bits/stdc++.h>
using namespace std;

#define N 100001
#define MOD 1000000007

int main()
{
    long long t,k,i;
    scanf("%lld %lld",&t,&k);
    long long dp[N];
    dp[0]=1;
    for(i=1;i<N;i++)
    {
        dp[i]=dp[i-1];
        if(i>=k)
            dp[i]+=dp[i-k];
        dp[i]=dp[i]%MOD;
    }
    long long sum[N];
    sum[0]=dp[0];
    for(i=1;i<N;i++)
        sum[i]=(dp[i]+sum[i-1])%MOD;
    while(t--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",(sum[b]-sum[a-1]+MOD)%MOD);
    }
}
