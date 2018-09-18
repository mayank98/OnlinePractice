#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
        double n,sigma;

        cin >> n >> sigma;
    	if(n==1 && sigma!=0)
    	{
    		cout << "-1\n";
    		continue;
    	}

    	if(n==1)
    	{
    		cout << "1\n";
    		continue;
    	}

    	double k=sigma*sqrt(12)/sqrt((n*n)-1);
    	for(ll i=1;i<=n;i++)
    		cout << k*i << " ";
    	cout << endl;
    }
}