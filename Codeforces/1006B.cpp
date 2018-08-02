#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n,k;
    cin >> n >> k;
    vector <ll> a(n),a1;
    for(i=0;i<n;i++)
        cin >> a[i];
    a1=a;
    sort(a1.rbegin(),a1.rend());
    ll ans=0;
    ll idx=0,sum[k];
    for(i=0;i<k;i++)
    {
        ll curr=a1[i];
        ans+=curr;
        for(ll j=0;j<n;j++)
        {
            if(a[j]==curr)
            {
                a[j]=-1;
                sum[idx]=j;
                idx++;
                break;
            }
        }
    }
    sort(sum,sum+k);
    sum[k-1]=n-1;
    cout << ans << endl << sum[0]+1 << " ";
    for(i=1;i<k;i++)
        cout << sum[i]-sum[i-1] << " ";
}