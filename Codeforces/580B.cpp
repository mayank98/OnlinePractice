#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,d,i;
    cin >> n >> d;
    vector <pair<long long,long long> > friends;
    long long m,s;
    for(i=0;i<n;i++)
    {
        cin >> m >> s;
        friends.push_back(make_pair(m,s));
    }
    sort(friends.begin(),friends.end());
    for(i=1;i<n;i++)
        friends[i].second+=friends[i-1].second;
    long long ans=0;
    for(i=0;i<n;i++)
    {
        m=friends[i].first;
        pair <long long,long long> p=make_pair(m+d,0);
        auto it=lower_bound(friends.begin(),friends.end(),p);
        int j=it-friends.begin();
        long long temp=friends[j-1].second;
        if(i!=0)
            temp-=friends[i-1].second;
        ans=max(ans,temp);
    }
    cout << ans;
}
