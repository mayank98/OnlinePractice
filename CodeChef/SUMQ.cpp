#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main()
{
	int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long p,q,r;
		scanf("%lld %lld %lld",&p,&q,&r);
		long long i;
		vector <long long> a,b,c;
		long long temp;

		for(i=0;i<p;i++)
		{
			scanf("%lld",&temp);
			a.push_back(temp);
		}

		for(i=0;i<q;i++)
		{
		    scanf("%lld",&temp);
			b.push_back(temp);
		}

		for(i=0;i<r;i++)
		{
		    scanf("%lld",&temp);
			c.push_back(temp);
		}

		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		sort(c.begin(),c.end());

		long long sumA[p]={0},sumC[r]={0};

		sumA[0]=a[0];
		for(i=1;i<p;i++)
			sumA[i]=sumA[i-1]+a[i];

		sumC[0]=c[0];
		for(i=1;i<r;i++)
			sumC[i]=sumC[i-1]+c[i];

		long long ans=0;
		for(i=q-1;i>=0;i--)
		{
			auto it1=upper_bound(a.begin(), a.end(), b[i]);
			long long m=it1-a.begin(); // first such that x>y

			auto it2=upper_bound(c.begin(), c.end(), b[i]);
			long long n=it2-c.begin(); // first such that z>y

            if((m<1)||(n<1))
                break;

            long long x=sumA[m-1] + m*b[i];
            x=x%MOD;
            long long y=sumC[n-1] + n*b[i];
            y=y%MOD;
			ans = ans + (x*y)%MOD;
			ans=ans%MOD;
		}
		printf("%lld\n",ans);
	}
}
