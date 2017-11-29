#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int l[200],r[200];
    vector < vector <int> > lists;
    for(i=1;i<=n;i++)
    {
        cin >> l[i] >> r[i];
        if(l[i]==0)
        {
            vector <int> temp;
            temp.push_back(i);
            lists.push_back(temp);
        }
    }
    int numLL=lists.size();
    for(i=0;i<numLL;i++)
    {
        int j=lists[i][0];
        while(r[j]!=0)
        {
            lists[i].push_back(r[j]);
            j=r[j];
        }
    }
    vector <int> result;
    for(i=0;i<numLL;i++)
        result.insert(result.end(), lists[i].begin(), lists[i].end());
    for(i=1;i<=n;i++)
    {
        auto it=find(result.begin(), result.end(), i);
        int idx=it-result.begin();
        if(idx>0)
            cout << result[idx-1];
        else
            cout << 0;
        cout << " ";
        if(idx<n-1)
            cout << result[idx+1];
        else
            cout << 0;
        cout << endl;
    }
}