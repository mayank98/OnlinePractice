#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll n,i;
    cin >> n;
    vector <pair<float,string> > ls;
    
    for(i=0;i<n;i++)
    {
        string str;
        cin >> str;
        ll k=str.size();
        ll s=0;
        for(ll j=0;j<k;j++)
            if(str[j]=='s')
                s++;

        if(s==0)
            ls.push_back({INF,str});
        else
            ls.push_back({(1.0*(k-s)/s),str});
    }

    sort(ls.begin(),ls.end());
    string final="";
    for(i=0;i<n;i++)
        final+=ls[i].second;

    ll len=final.size();
    ll h[len];
    h[len-1]=(final[len-1]=='h' ? 1 : 0);
    for(i=len-2;i>=0;i--)
        h[i]=h[i+1]+(final[i]=='h' ? 1 : 0);

    ll ans=0;
    for(i=0;i<len;i++)
    {
        if(final[i]=='s')
            ans+=h[i];
    }
    cout << ans;
}