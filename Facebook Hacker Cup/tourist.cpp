#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);
    
    ifstream cin("tourist.txt");
    ofstream cout("output.txt");
    ll t;
    cin >> t;
    for(ll test=1;test<=t;test++)
    {
        cout << "Case #" << test << ": ";
        ll i,n,k,v;
        cin >> n >> k >> v;
        string places[n];
        for(i=0;i<n;i++)
            cin >> places[i];
        ll idx=((v-1)*k)%n;
        if(n-idx>=k)
            for(i=0;i<k;i++)
                cout << places[idx+i] << " ";
        else
        {
            for(i=0;i<k-(n-idx);i++)
                cout << places[i] << " ";
            for(i=idx;i<n;i++)
                cout << places[i] << " ";
        }
        cout << endl;
    }
}