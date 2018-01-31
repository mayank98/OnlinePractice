#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[]={0,0,0,0};
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            sum+=temp;
            a[temp%4]++;
        }
        
        if(sum%4!=0)
        {
            cout << -1 << endl;
            continue;
        }

        ll steps=0;
        steps+=a[2]/2;
        a[2]=a[2]%2;

        ll temp=min(a[1],a[3]);
        steps+=temp;
        a[1]-=temp;
        a[3]-=temp;
        
        temp=a[3];
        if(a[3]==0)
            temp=a[1];

        if(a[2]==1)
        {
            steps+=2;
            temp-=2;
        }
        steps+=3*(temp/4);
        cout << steps << endl;
    }
}