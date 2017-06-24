#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,i;
		cin >> n >> k;
		int T[n],D[n];
		for(i=0;i<n;i++)
			cin >> T[i] >> D[i];
		int sum=0,cost=0;
		for(i=0;i<n;i++)
		{
			sum+=T[i];
			if(sum>k)
				break;
		}
		if(i<n)
			cost+=(sum-k)*D[i];
		for(int j=i+1;j<n;j++)
			cost+=T[j]*D[j];
		cout << cost << endl;
	}
}