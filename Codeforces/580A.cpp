#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll n;
    cin >> n;
    ll i,a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    i=0;
    ll ans=0;
    while(i<n)
    {
        ll curr=1;
        while(i+1<n && a[i]<=a[i+1])
        {
            curr++;
            i++;
        }
        i++;
        ans=max(ans,curr);
    }
    cout << ans;
}