#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

	ll n,m,d;
	cin >> n >> m >> d;

	map <ll,ll> mp;
	ll i,a[n];
	set <ll> s;

	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s.insert(a[i]);
	}
	vector <ll> b(s.begin(), s.end());
	ll day=1;
	for(auto x:b)
	{
		ll y=x;
		if(s.find(y)==s.end())
			continue;
		while(s.lower_bound(y)!=s.end())
		{
			ll val = *s.lower_bound(y);
			s.erase(val);
			mp[val]=day;
			y=val+d+1;
		}
		day++;
	}

	cout << day-1 << endl;
	for(i=0;i<n;i++)
		cout << mp[a[i]] << " ";
}