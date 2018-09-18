#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

	ll n,h;
	cin >> n >> h;

	ll i,len[n];
	vector <pair<ll,ll> > segs(n);
	vector <ll> diff(n,0);

	for(i=0;i<n;i++)
	{
		ll x1,x2;
		cin >> x1 >> x2;
		segs[i]={x1,x2};
		len[i]=x2-x1;
	}

	for(i=1;i<n;i++)
	{
		len[i]+=len[i-1];
		diff[i]=diff[i-1]+segs[i].first-segs[i-1].second;
	}

	ll ans=0;
	for(i=0;i<n;i++)
	{
		ll idx=lower_bound(diff.begin()+i, diff.end(), diff[i]+h)-diff.begin();
		idx--;
		ll val;
		if(i==0)
			val=len[idx];
		else
			val=len[idx]-len[i-1];
		ans=max(ans,val);
	}
	cout << h+ans;
}
