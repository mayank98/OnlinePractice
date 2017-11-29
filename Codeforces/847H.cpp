#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;
    cin >> n;
    long long a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    if(n==1)
    {
        cout << 0;
        return 0;
    }
    for(i=n-1;i>0;i--)
    {
        if(a[i-1]<=a[i])
            break;
    }
    long long dec=i;
    long long ans=0;
    for(i=1;i<dec;i++)
    {
        if(a[i]>a[i-1])
            continue;
        ans+=a[i-1]-a[i]+1;
        a[i]=a[i-1]+1;
    }
    if(dec>0 && a[dec-1]==a[dec])
        ans++;
    cout << ans;
}