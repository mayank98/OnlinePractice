#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed;
    // cout << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,u,d;
        cin >> n >> u >> d;
        ll i,h[n];
        for(i=0;i<n;i++)
            cin >> h[i];
        bool special_jump=false;
        for(i=0;i<n-1;i++)
        {
            if(h[i+1]==h[i])
                continue;
            else if(h[i+1]>h[i]) 
            {
                if(h[i+1]-h[i]>u)
                    break;
            }
            else
            {
                if(h[i]-h[i+1]<=d)
                    continue;
                if(h[i]-h[i+1]>d && !special_jump)
                {
                    special_jump=true;
                    continue;
                }
                else
                    break;
            }
        }
        cout << i+1 << endl;
    }
}