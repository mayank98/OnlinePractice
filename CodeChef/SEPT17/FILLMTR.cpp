#include <bits/stdc++.h>
using namespace std;

int Find(int u,int parent[])
{
    int v=parent[u];
    if(v==u)
        return u;
    parent[u]=Find(v,parent);
    return parent[u];
}

void Union(int u,int v,int parent[])
{
    int x=Find(u,parent);
    int y=Find(v,parent);
    parent[x]=y;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,q,i;
        cin >> n >> q;
        int parent[n+1];
        for(i=1;i<=n;i++)
            parent[i]=i;
        vector <pair<int,int> > adjList[n+1];
        vector <pair<int,pair<int,int> > > edges;
        while(q--)
        {
            int u,v,w;
            cin >> u >> v >> w;
            if(Find(u,parent)==Find(v,parent))
                edges.push_back(make_pair(u,make_pair(v,w)));
            else
            {
                Union(u,v,parent);
                adjList[u].push_back(make_pair(v,w));
                adjList[v].push_back(make_pair(u,w));
            }
        }
        vector <bool> visited(n+1,false);
        vector <int> parity(n+1,0);
        for(i=1;i<=n;i++)
        {
            if(visited[i])
                continue;
            queue <int> q;
            q.push(i);
            while(!q.empty())
            {
                int u=q.front();
                visited[u]=true;
                q.pop();
                for(int j=0;j<adjList[u].size();j++)
                {
                    int v=adjList[u][j].first;
                    int w=adjList[u][j].second;
                    if(visited[v])
                        continue;
                    visited[v]=true;
                    q.push(v);
                    parity[v]=parity[u]^w;
                }
            }
        }
        for(i=0;i<edges.size();i++)
        {
            int u=edges[i].first;
            int v=edges[i].second.first;
            int w=edges[i].second.second;
            if(parity[u]^parity[v]^w!=0)
            {
                cout << "no\n";
                break;
            }
        }
        if(i==edges.size())
            cout << "yes\n";
    }
}
