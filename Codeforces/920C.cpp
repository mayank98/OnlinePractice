#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll n,i;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    string str;
    cin >> str;
    str+="0";

    ll dp[n];
    dp[0]=0;
    for(i=1;i<n;i++)
    {
        if(str[i-1]=='0')
            dp[i]=0;
        else
            dp[i]=dp[i-1]+1;
    }

    for(i=0;i<n;i++)
    {
        ll pos=a[i]-1;
        if(dp[max(i,pos)]<abs(i-pos))
            break;
    }

    if(i==n)
        cout << "YES";
    else
        cout << "NO";
}