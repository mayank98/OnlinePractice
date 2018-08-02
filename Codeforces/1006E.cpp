#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

vector <ll> dfsList;
ll num[200005];
vector <ll> adjList[200005];

ll dfs(ll u)
{
    dfsList.push_back(u);
    num[u]=1;
    for(auto v:adjList[u])
        num[u]+=dfs(v);
    return num[u];
}

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n,q;
    cin >> n >> q;

    for(i=2;i<=n;i++)
    {
        ll temp;
        cin >> temp;
        adjList[temp].push_back(i);
    }
    for(i=1;i<=n;i++)
        sort(adjList[i].begin(),adjList[i].end());
    
    dfs(1);
    vector <pair<ll,ll> > queries[n+1];
    for(i=0;i<q;i++)
    {
        ll u,k;
        cin >> u >> k;
        queries[u].push_back({k,i});
    }

    ll ans[q];
    ll len=dfsList.size();
    for(i=0;i<len;i++)
    {
        ll u=dfsList[i];
        for(auto x:queries[u])
        {
            ll idx=i-1+(x.first);
            if(num[u]<x.first)
                ans[x.second]=-1;
            else
                ans[x.second]=dfsList[idx];
        }
    }

    for(i=0;i<q;i++)
        cout << ans[i] << endl;
}