#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    set <pair <int,vector<int> > > ls;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        vector <int> temp(1,0);
        auto pp=make_pair(arr[i],temp);
        set <pair <int,vector<int> > >::iterator it=ls.lower_bound(pp);
        if(ls.empty() || it==ls.begin())
        {
            vector<int> v(1,arr[i]);
            auto pp2=make_pair(arr[i],v);
            ls.insert(pp2);
        }
        else
        {
            it--;
            vector <int> v = it->second;
            v.push_back(arr[i]);
            ls.erase(it);
            ls.insert(make_pair(arr[i],v));
        }
    }
    for(auto iter=ls.begin();iter!=ls.end();iter++)
    {
        vector <int> vv=iter->second;
        for(int j=0;j<vv.size();j++)
            cout << vv[j] << " ";
        cout << endl;
    }
}