#include <bits/stdc++.h>
using namespace std;

#define ll long long
    
ll n,m;
vector <pair<ll,char> > adjList[105];
bool dp[105][105][27];
bool visited[105][105][27];

bool func(ll u,ll v,ll val) // first i moves which should be >= val
{
    if(visited[u][v][val])
        return dp[u][v][val];
    bool ans=true;
    for(ll i=0;i<adjList[u].size();i++)
    {
        ll vtx=adjList[u][i].first;
        ll val2=adjList[u][i].second;
        val2-=96;
        if(val2<val) continue;
        ans=ans&&func(v,vtx,val2);
    }
    visited[u][v][val]=true;
    dp[u][v][val]=(!ans);
    return dp[u][v][val];
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll i,j,k;
    cin >> n >> m;

    for(i=1;i<=n;i++)
        adjList[i].clear();

    for(i=1;i<=m;i++)
    {
        ll u,v;
        char c;
        cin >> v >> u >> c;
        adjList[v].push_back({u,c});
    }


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=0;k<=26;k++)
            {
                dp[i][j][k]=false;
                visited[i][j][k]=false;
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(func(i,j,0))
                cout << "A";
            else
                cout << "B";
        }
        cout << endl;
    }
}