#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll n,m;
ll a[100005],b[100005];
ll shortage;

ll balloons(ll candies)
{
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		if(b[i]==0)
			sum+=a[i];
		else
			sum+=min(a[i],candies/b[i]);
	}
	return sum;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll i;
    cin >> n >> m;

    ll tot=0;
    for(i=0;i<n;i++)
    {
    	cin >> a[i];
    	tot+=a[i];
    }
    for(i=0;i<n;i++)
    	cin >> b[i];

    shortage=tot-m;
    if(shortage<=0)
    {
    	cout << 0;
    	return 0;
    }

    ll l=0,r=0;
    for(i=0;i<n;i++)
    	r=max(r,a[i]*b[i]);

    while(r>l+1)
    {
    	ll mid=(l+r)/2;

    	if(balloons(mid)<shortage)
    		l=mid;
    	else
    		r=mid;
    }

    if(balloons(l)>=shortage)
    	cout << l;
    else
    	cout << r;
}