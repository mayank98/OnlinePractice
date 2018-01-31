#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    long long c[n+1];
    for(int i=1;i<=n;i++)
        cin >> c[i];
    vector <int> adjList[n+1];
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector <bool> visited(n+1,false);
    vector <int> counter[n+1];
    int idx=0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        visited[i]=true;
        idx++;
        queue <int> q;
        q.push(i);
        counter[idx].push_back(i);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int j=0;j<adjList[u].size();j++)
            {
                int v=adjList[u][j];
                if(!visited[v])
                {
                    q.push(v);
                    counter[idx].push_back(v);
                    visited[v]=true;
                }
            }
        }
    }
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        if(counter[i].empty()) continue;
        long long k=10000000000;
        for(int j=0;j<counter[i].size();j++)
            k=min(k,c[counter[i][j]]);
        ans+=k;
    }
    cout << ans;
}