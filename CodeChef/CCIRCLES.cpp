#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define N 1000005

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ll n,q;
    cin >> n >> q;

    ll j,i;
    double x[n],y[n],r[n];
    for(i=0;i<n;i++)
    	cin >> x[i] >> y[i] >> r[i];

    vector <ll> start(N,0);
    vector <ll> finish(N,0);

    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
		{
			ll dis=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			ll val;
			if(dis<(r[i]-r[j])*(r[i]-r[j]))
				val=ceil(abs(r[i]-r[j])-sqrt(dis));
			else if(dis<(r[i]+r[j])*(r[i]+r[j]))
				val=0;
			else
				val=ceil(sqrt(dis)-abs(r[i]+r[j]));
			
			ll val2=floor(sqrt(dis)+r[i]+r[j]);

			start[val]++;
			finish[val2]++;
		}
	}

	for(i=1;i<N;i++)
	{
		start[i]+=start[i-1];	
		finish[i]+=finish[i-1];	
	}

	for(i=0;i<q;i++)
	{
		ll k;
		cin >> k;

		if(k==0)
			cout << start[k] << endl;
		else
			cout << start[k]-finish[k-1] << endl;
	}
}