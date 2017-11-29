#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    int cnt[7]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<7;j++)
        {
            cnt[j]+=a[i]%10;
            a[i]/=10;
        }
    }
    int ans = *max_element(cnt,cnt+7);
    cout << ans;
}