#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed;
    // cout << setprecision(16);
    
    ll n,i;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    string str;
    cin >> str;
    ll b[n];
    for(i=0;i<n;i++)
        b[i]=str[i]-'0';
    ll l=-1000000000;
    ll r=1000000000;
    for(i=4;i<n;i++)
    {
        ll sum=b[i-1]+b[i-2]+b[i-3]+b[i-4];
        if(sum==0)
        {
            if(b[i]==1)
            {
                l=max(l,a[i]);
                l=max(l,a[i-1]);
                l=max(l,a[i-2]);
                l=max(l,a[i-3]);
                l=max(l,a[i-4]);
            }
        }
        if(sum==4)
        {
            if(b[i]==0)
            {
                r=min(r,a[i]);
                r=min(r,a[i-1]);
                r=min(r,a[i-2]);
                r=min(r,a[i-3]);
                r=min(r,a[i-4]);
            }
        }    
    }
    cout << l+1 << " " << r-1;
}