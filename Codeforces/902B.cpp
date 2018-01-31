#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll n;
    cin >> n;
    vector <ll> adjList[n+1];
    for(ll i=2;i<=n;i++)
    {
        ll p;
        cin >> p;
        adjList[i].push_back(p);
        adjList[p].push_back(i);
    }
    ll c[n+1];
    for(ll i=1;i<=n;i++)
        cin >> c[i];
    ll ans=0;
    vector <ll> color(n+1,0);
    queue <ll> q;
    vector <bool> visited(n+1,false);
    q.push(1);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        visited[u]=true;
        if(c[u]!=color[u])
        {
            color[u]=c[u];
            ans++;
        }
        for(ll j=0;j<adjList[u].size();j++)
        {
            ll v=adjList[u][j];
            if(visited[v]) continue;
            color[v]=color[u];
            q.push(v);
        }
    }
    cout << ans;
}