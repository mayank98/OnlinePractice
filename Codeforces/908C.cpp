#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n;
    double r;
    cin >> n >> r;

    double x[n];
    double y[n];

    ll i,j;
    for(i=0;i<n;i++)
        cin >> x[i];

    y[0]=r;
    for(i=1;i<n;i++)
    {
        y[i]=r;
        for(j=0;j<i;j++)
        {
            double d=abs(x[i]-x[j]);
            if(d>2*r) continue;
            y[i]=max(y[i],y[j]+sqrt((4*r*r)-(d*d)));
        }
    }

    for(i=0;i<n;i++)
        printf("%.8f ",y[i]);
}