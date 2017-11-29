#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    map <int,int> mp;
    for(i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        auto it=mp.find(temp);
        if(it==mp.end())
            mp.insert(make_pair(temp,1));
        else
            it->second++;
    }
    if(mp.size()!=2)
        cout << "NO\n";
    else
    {
        auto it1=mp.begin();
        auto it2=it1++;
        if(it1->second==it2->second)
        {
            cout << "YES\n";
            cout << it1->first << " " << it2->first;
        }
        else
            cout << "NO\n";
    }
}