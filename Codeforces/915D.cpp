#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n,m;
vector <bool> visited(505,false);
vector <pair<ll,bool> > adjList[505];
vector <ll> parent(505,-1);
bool cycle_found=false;

void dfs(ll u)
{
    if(cycle_found) return;
    for(ll j=0;j<adjList[u].size();j++)
    {
        auto x=adjList[u][j];
        ll v=x.first;
        if(!x.second)
        {
            adjList[u][j].second=true;
            parent[v]=u;
            if(visited[v])
            {
                cycle_found=true;
                return;
            }
            else
            {
                visited[v]=true;
                dfs(v);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    cin >> n >> m;
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin >> u >> v;
        adjList[u].push_back({v,false});
    }

    for(ll i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            visited[i]=true;
            dfs(i);
        }
        if(cycle_found) break;
    }

    if(!cycle_found)
        cout << "YES";
    else
        cout << "YES";
}