#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n;
    cin >> n;
    vector <ll> adjList[n+1];
    for(ll i=1;i<=n-1;i++)
    {
        ll temp;
        cin >> temp;
        adjList[temp].push_back(i+1);
    }

    vector <bool> isLeaf(n+1,true);
    for(ll i=1;i<=n;i++)
    {
        if(!adjList[i].empty())
            isLeaf[i]=false;
    }

    queue <ll> q;
    q.push(1);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        ll cnt=0;
        for(ll i=0;i<adjList[u].size();i++)
        {
            ll v=adjList[u][i];
            if(isLeaf[v]) cnt++;
            q.push(v);
        }
        if(!isLeaf[u] && cnt<3)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}