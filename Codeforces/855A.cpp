#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    set <string> mp;
    for(i=0;i<n;i++)
    {
        string str;
        cin >> str;
        if(mp.find(str)==mp.end())
        {
            mp.insert(str);
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}