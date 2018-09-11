#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // cout << fixed << setprecision(16);
    // memset(dp,-1,sizeof(dp));

    ll t;
    cin >> t;
    while(t--)
    {
        ll i,n;
        cin >> n;
        vector <pair<ll,ll> > adjList[n+1];
        map <string,ll> mp;
        for(i=0;i<n;i++)
        {
            string s;
            cin >> s;
            mp[s]=i+1;
            ll num;
            cin >> num;
            while(num--)
            {
                ll v,cost;
                cin >> v >> cost;
                adjList[i+1].push_back({v,cost});
            }
        }

        ll r;
        cin >> r;
        while(r--)
        {
            string s1,s2;
            cin >> s1 >> s2;
            ll src=mp[s1];
            ll sink=mp[s2];

            vector <ll> dist(n+1,INF);
            vector <bool> visited(n+1,false);
            dist[src]=0;

            priority_queue <pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > pq; 
            for(i=1;i<=n;i++)
                pq.push({dist[i],i});

            while(!pq.empty())
            {
                ll u=pq.top().second;
                pq.pop();

                if(visited[u])
                    continue;
                else
                    visited[u]=true;

                if(u==sink)
                    break;

                for(auto &x:adjList[u])
                {
                    ll v=x.first;
                    ll cost=x.second;
                    if(dist[u]+cost<dist[v])
                    {
                        dist[v]=dist[u]+cost;
                        pq.push({dist[v],v});
                    }
                }
            }

            cout << dist[sink] << endl;
        }
    }
}