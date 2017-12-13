#include <bits/stdc++.h>
using namespace std;

#define INF 1000000
#define pii pair<int,int>

int main()
{
    // cin.sync_with_stdio(0);
    // cout.sync_with_stdio(0);
    int t;
    // cin >> t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        // cin >> n;
        scanf("%d",&n);
        map <string,int> cities;
        vector <pair<int,int> > adjList[n+1];  // pair of weight,vertex
        for(i=1;i<=n;i++)
        {
            // string str;
            char str[20];
            scanf("%s",str);
            // cin >> str;
            cities[str]=i;
            int p;
            scanf("%d",&p);
            // cin >> p;
            while(p--)
            {
                int nr,cost;
                scanf("%d %d",&nr,&cost);
                // cin >> nr >> cost;
                adjList[i].push_back(make_pair(cost,nr));
            }
        }
        int r;
        scanf("%d",&r);
        // cin >> r;
        while(r--)
        {
            char str1[20],str2[20];
            scanf("%s %s",str1,str2);
            // string str1,str2;
            // cin >> str1 >> str2;
            int src=cities[str1];
            int destination=cities[str2];
            // priority_queue < pii,vector<pii>,greater<pii> > pq;
            set <pair<int,int> > pq;
            vector <int> dist(n+1,INF); 
            pq.insert(make_pair(0,src));
            // pq.push(make_pair(0,src));
            // cout << "start from source=" << src << endl;
            vector <bool> visited(n+1,false);
            while(!pq.empty())
            {
                int u=pq.begin()->second;
                dist[u]=pq.begin()->first;
                // int u=pq.top().second;
                // dist[u]=pq.top().first;
                // pq.pop();
                pq.erase(pq.begin());
                // cout << "mayank" << u << endl;
                // if(visited[u]) continue;
                // visited[u]=true;
                if(u==destination)
                    break;
                // pq.erase(pq.begin());
                for(int j=0;j<adjList[u].size();j++)
                {
                    int v=adjList[u][j].second;
                    int d=adjList[u][j].first;
                    // if(!visited[v] && dist[u]+d<dist[v])
                    if(dist[u]+d<dist[v])
                    {
                        // pq.erase({dist[v],v});
                        dist[v]=dist[u]+d;
                        pq.insert(make_pair(dist[u]+d,v));
                        // pq.push(make_pair(dist[v],v));
                    }
                }
            }
            // cout << dist[destination] << endl;
            printf("%d\n",dist[destination]);
        }
    }
}