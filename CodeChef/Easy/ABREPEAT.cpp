#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,i,k;
        cin >> n >> k;
        string str;
        cin >> str;
        set < pair <int,int> > a,b;
        int t1=0,t2=0;
        for(i=0;i<n;i++)
        {
            if(str[i]=='a')
                {a.insert(make_pair(i,t1)); t1++;}
            if(str[i]=='b')
                {b.insert(make_pair(i,t2)); t2++;}
        }
        long long n1=a.size();
        long long n2=b.size();
        long long ans=(n1*n2*k*(k-1))/2;
        for(auto itr=a.begin();itr!=a.end();itr++)
        {
            auto it=b.lower_bound(make_pair(itr->first,0));
            if(it!=b.end())
                ans=ans+(n2-(it->second))*k;
        }
        cout << ans << endl;
    }
}
