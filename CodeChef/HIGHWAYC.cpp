#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    cout << fixed << setprecision(16);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,i;
        double s,w;
        cin >> n >> s >> w;
        double v[n],p[n],c[n];
        ll d[n];
        for(i=0;i<n;i++)
            cin >> v[i];
        for(i=0;i<n;i++)
            cin >> d[i];
        for(i=0;i<n;i++)
            cin >> p[i];
        for(i=0;i<n;i++)
            cin >> c[i];

        double ans=0;
        for(i=0;i<n;i++)
        {
            double wait=0;
            double tot=0;
            if(d[i]==1)
            {
                if(p[i]<0)
                {
                    if(w/s >= abs(p[i])/v[i])
                        wait=(c[i]-p[i]+0.000001)/v[i];
                }
                else
                    wait=max((c[i]-p[i]+0.000001)/v[i],0.0);
            }
            else
            {
                if(p[i]>0)
                {
                    if(w/s >= p[i]/v[i])
                        wait=(c[i]+p[i]+0.000001)/v[i];
                }
                else
                    wait=max((c[i]+p[i]+0.000001)/v[i],0.0);
            }
            tot=wait+(w/s);
            ans+=tot;
            for(ll j=i+1;j<n;j++)
            {
                if(d[j]==1)
                    p[j]+=v[j]*tot;
                else
                    p[j]-=v[j]*tot;
            }
        }
        cout << ans << endl;
    }
}