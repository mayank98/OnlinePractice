#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,x,y;
    cin >> n >> x >> y;
    vector < pair<long,long> > ls;
    long i,be,en;
    for(i=0;i<n;i++)
    {
    	cin >> be >> en;
    	ls.push_back(make_pair(be,en));
    }
    set <long> v,w;
    for(i=0;i<x;i++)
    {
    	long temp;
    	cin >> temp;
    	v.insert(temp);
    }
    for(i=0;i<y;i++)
    {
    	long temp;
    	cin >> temp;
    	w.insert(temp);
    }
    vector <long> times;
    for(i=0;i<n;i++)
    {
    	be=ls[i].first;
    	en=ls[i].second;
    	if(be<*(v.begin())) continue;
    	if(en>*(w.rbegin())) continue;
    	auto it1=v.lower_bound(be);
    	long tym=*it1;
    	if(it1==v.end())
            tym=*(v.rbegin());
    	else if(be<(*it1))
        {
            it1--;
            tym=*it1;
        }
    	auto it2=w.lower_bound(en);
        times.push_back((*it2)-tym+1);
    }
    long ans=times[0];
    for(i=0;i<times.size();i++)
        ans=min(ans,times[i]);
    cout << ans;
}
