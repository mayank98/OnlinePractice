#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,p;
    cin >> n >> k >> p;
    int a[n],i,totalOnes=0;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
            totalOnes++;
    }
    string query;
    cin >> query;
    if(k>=n)
    {
        for(i=0;i<p;i++)
        {
            if(query[i]=='?')
                cout << totalOnes << endl;
        }
        return 0;
    }
    deque <int> frames;
    multiset <int> record;
    int sum=0;
    for(i=0;i<k;i++)
        sum=sum+a[i];
    frames.push_back(sum);
    record.insert(sum);
    for(int j=i;j<n;j++)
    {
        sum=sum+a[j]-a[j-k];
        frames.push_back(sum);
        record.insert(sum);
    }
    int round[n];
    round[0]=*(record.rbegin());
    for(i=1;i<n;i++)
    {
        int be=*(frames.begin());
        int en=*(frames.rbegin());
        frames.pop_back();
        auto it=record.find(en);
        record.erase(it);
        int idx=k-i;
        if(idx<0)
            idx=idx+n;
        frames.push_front(be+a[n-i]-a[idx]);
        record.insert(be+a[n-i]-a[idx]);
        round[i]=*(record.rbegin());
    }
    int shifts=0;
    for(i=0;i<p;i++)
    {
        if(query[i]=='?')
            cout << round[shifts%n] << endl;
        else
            shifts++;
    }
    return 0;
}
