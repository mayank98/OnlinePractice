#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        set <int> sets[n];
        int i,j,temp;
        for(i=0;i<n;i++)
        {
            int len;
            cin >> len;
            for(j=0;j<len;j++)
            {
                cin >> temp;
                sets[i].insert(temp);
            }
        }

        int cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                vector <int> result(sets[i].size()+sets[j].size());
                auto it=set_union(sets[i].begin(),sets[i].end(),sets[j].begin(),sets[j].end(),result.begin());
                result.resize(it-result.begin());
                if(result.size()==k)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}
