#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    vector <int> adjList[n+1];
    vector <int> color(n+1,-1);
    for(i=0;i<n-1;i++)
    {
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    color[1]=0;
    queue <int> q;
    q.push(1); 
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(i=0;i<adjList[u].size();i++)
        {
            int v=adjList[u][i];
            if(color[v]!=-1)
                continue;
            color[v]=1-color[u];
            q.push(v);
        }
    }
    long long a=0,b;
    for(i=1;i<=n;i++)
        a+=color[i];
    b=n-a;
    cout << (a*b)-n+1;
}