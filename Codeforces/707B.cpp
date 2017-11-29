#include <bits/stdc++.h>
using namespace std;

#define INF 1000000007

int main()
{
    long long m,n,k;
    cin >> n >> m >> k;
    if(k==0)
    {
        cout << -1;
        return 0;
    }
    vector <pair<long long,long long> > adjList[n+1];
    vector <bool> isStorage(n+1,false);
    long long i,j;
    for(i=0;i<m;i++)
    {
        long long u,v,d;
        cin >> u >> v >> d;
        adjList[u].push_back(make_pair(v,d));
        adjList[v].push_back(make_pair(u,d));
    }
    for(i=0;i<k;i++)
    {
        long long u;
        cin >> u;
        isStorage[u]=true;
    }
    long long ans=INF;
    for(i=1;i<=n;i++)
    {
        if(!isStorage[i])
            continue;
        for(j=0;j<adjList[i].size();j++)
        {
            long long v=adjList[i][j].first;
            long long d=adjList[i][j].second;
            if(isStorage[v])
                continue;
            ans=min(ans,d);
        }
    }
    if(ans<INF)
        cout << ans;
    else
        cout << -1;
}