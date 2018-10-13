#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,h,a,b,k;
    cin >> n >> h >> a >> b >> k;
    for(ll i=0;i<k;i++)
    {
    	ll t1,f1,t2,f2;
    	cin >> t1 >> f1 >> t2 >> f2;

    	if(t1==t2)
    	{
    		cout << abs(f1-f2) << endl;
    		continue;
    	}
    	ll ans;
    	ll flr;
    	if(f1<=b && a<=f1)
    	{
    		ans=0;
    		flr=f1;
    	}
    	else
    	{	
    		ans=min(abs(f1-a),abs(f1-b));
    		if(ans==abs(f1-a))
    			flr=a;
    		else
    			flr=b;
    	}
    	ans+=abs(t1-t2)+abs(flr-f2);
    	cout << ans << endl;
    }
}