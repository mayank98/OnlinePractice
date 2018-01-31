#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n,m;
    cin >> n >> m;
    map <string,string> mp; // ip,name

    ll i;
    for(i=0;i<n;i++)
    {
        string ip,name;
        cin >> name >> ip;
        mp.insert({ip,name});
    }

    string commands[m];
    for(i=0;i<m;i++)
    {
        string str1,str2;
        cin >> str1 >> str2;
        string temp=str2.substr(0,str2.size()-1);
        cout << str1+" "+str2+" #"+mp[temp]+"\n";
    }
}