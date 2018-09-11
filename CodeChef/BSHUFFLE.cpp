#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int> > a(1);
	for(int i=0;i<n;i++)
		a[0].push_back(i+1);

	for(int i=0;i<n;i++)
	{
		vector<vector<int> > temp;
		for(auto x:a)
		{
			for(int j=0;j<n;j++)
			{
				auto y=x;
				swap(y[i],y[j]);
				temp.push_back(y);
			}
		}
		a=temp;
	}

	map<vector<int>,int> mp;
	for(auto x:a)
	{
		if(mp.count(x))
			mp[x]++;
		else
			mp[x]=1;
	}
	
	cout << a.size() << " " << mp.size() << endl;

	for(auto x:mp)
	{
		for(auto y:x.first)
			cout << y;
		cout << " " << x.second << endl;
	}
}