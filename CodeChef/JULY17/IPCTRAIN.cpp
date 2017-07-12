#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N,D,i;
        cin >> N >> D;
        vector <pair<int,pair<int,int> > > trainers;
        int d,t,s;
        for(i=0;i<N;i++)
        {
            cin >> d >> t >> s;
            trainers.push_back(make_pair(s,make_pair(d,t)));
        }
        sort(trainers.rbegin(),trainers.rend());
        set <int> days;
        long long ans=0;
        for(i=1;i<=D;i++)
            days.insert(i);
        for(i=0;i<N;i++)
        {
            s=trainers[i].first;
            d=trainers[i].second.first;
            t=trainers[i].second.second;
            auto it=days.lower_bound(d);
            vector <int> del_days;
            int cnt=0;
            for(auto itr=it;itr!=days.end();itr++)
            {
                if(cnt>=t)
                    break;
                del_days.push_back(*itr);
                cnt++;
            }
            for(int j=0;j<del_days.size();j++)
                days.erase(del_days[j]);
            ans+=(long long)(t-cnt)*s;
        }
        cout << ans << endl;
    }
}
