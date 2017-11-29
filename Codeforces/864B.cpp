#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string str;
    cin >> n >> str;
    str+='A';
    int ans=0;
    set <char> mp;
    mp.clear();
    for(i=0;i<n+1;i++)
    {
        int k=str[i]-'a';
        if(k>=0 && k<26)
            mp.insert(str[i]);
        else
        {
            ans=max(ans,int(mp.size()));
            mp.clear();
        }
    }
    cout << ans;
}