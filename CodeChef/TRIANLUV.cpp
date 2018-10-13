#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

ll prod(ll a,ll b)
{
	return ((a%MOD)*(b%MOD))%MOD;
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
		ll x1,y1,x2,y2,x3,y3;
		cin >>x1>>y1>>x2>>y2>>x3>>y3;

		ll a=__gcd(abs(x1-x2),abs(y1-y2));
		ll b=__gcd(abs(x2-x3),abs(y2-y3));
		ll c=__gcd(abs(x3-x1),abs(y3-y1));
    
		ll ans=prod(prod(a,b),c);

    	ll temp,ans1=b+c-1;
    	if(a&1)
    		temp=prod(a,(a-1)/2);
    	else
    		temp=prod(a/2,a-1);
    	ans1=prod(ans1,temp);

    	ll ans2=a+c-1;
    	if(b&1)
    		temp=prod(b,(b-1)/2);
    	else
    		temp=prod(b/2,b-1);
    	ans2=prod(ans2,temp);

    	ll ans3=b+a-1;
    	if(c&1)
    		temp=prod(c,(c-1)/2);
    	else
    		temp=prod(c/2,c-1);
    	ans3=prod(ans3,temp);

    	ans=(ans+ans1)%MOD;
    	ans=(ans+ans2)%MOD;
    	ans=(ans+ans3)%MOD;

    	cout << ans << endl;
    }
}