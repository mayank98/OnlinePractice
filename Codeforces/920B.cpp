#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));

    ll t;
    cin >> t;
    while(t--)
    {
        ll n,i;
        cin >> n;
        ll l[n],r[n];
        for(i=0;i<n;i++)
            cin >> l[i] >> r[i];
        ll curr_time=0;
        for(i=0;i<n;i++)
        {
            curr_time=max(curr_time,l[i]);
            if(curr_time>r[i])
            {
                cout << "0 ";
                continue;
            }
            cout << curr_time << " ";
            curr_time+=1;
        }
        cout << endl;
    }
}