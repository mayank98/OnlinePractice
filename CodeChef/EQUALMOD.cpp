#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
    	ll n,i;
    	cin >> n;
    	ll a[n],b[n];
    	for(i=0;i<n;i++)
    		cin >> a[i];
    	for(i=0;i<n;i++)
    		cin >> b[i];

    	ll min_mod=*min_element(b,b+n);
    	vector<pair<ll,ll> > mods(n);
    	ll sum_mods=0;
    	for(i=0;i<n;i++)
    	{
    		mods[i]={a[i]%b[i],b[i]};
    		sum_mods+=a[i]%b[i];
    	}
    
    	sort(mods.begin(), mods.end());

    	ll bsums[n];
    	bsums[n-1]=mods[n-1].second;
    	for(i=n-2;i>=0;i--)
    		bsums[i]=bsums[i+1]+mods[i].second;
    
    	ll ans=bsums[0];
    	ll target;
    	for(i=0;i<n-1;i++)
    	{
    		ll target=mods[i].first;
    		if(target>=min_mod)
    			break;
    		ans=min(ans,target*n+bsums[i+1]);
    	}
    	if(mods[n-1].first<min_mod)
    		ans=min(ans,n*(mods[n-1].first));

    	ans-=sum_mods;
    	cout << ans << endl;
    }
}