#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.size();
    int num_a[n]={0};
    if(s[0]=='a')
        num_a[0]=1;
    int i,j;
    for(i=1;i<n;i++)
        num_a[i]=num_a[i-1]+(s[i]=='a'?1:0);
    int dp[n];
    dp[0]=1;
    int max_so_far=dp[0];
    for(i=1;i<n;i++)
    {
        if(s[i]=='a')
            dp[i]=1+max_so_far;
        else
        {
            dp[i]=0;
            for(j=0;j<i;j++)
            {
                int temp;
                if(s[j]=='a')
                    temp=num_a[j];
                else
                    temp=dp[j];
                dp[i]=max(dp[i],temp);
            }
            dp[i]++;
        }
        max_so_far=max(max_so_far,dp[i]);
    }
    cout << max_so_far;
}