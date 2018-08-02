#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    cout << fixed;
    cout << setprecision(16);

    double r,x1,y1,x2,y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;

    ll d1=x2-x1;
    ll d2=y2-y1;
    double dis=sqrt(d1*d1+d2*d2);
    
    if((d1*d1)+(d2*d2)>=r*r)
    {
        cout << x1 << " " << y1 << " " << r;
        return 0;
    }

    double dia=dis+r;
    if(dis!=0)
    {
        double x=x2+(((x1-x2)*dia)/dis);
        double y=y2+(((y1-y2)*dia)/dis);
        cout << (x+x2)/2 << " " << (y+y2)/2 << " " << dia/2;
        return 0;
    }

    cout << x1 << " " << y1+(r/2) << " " << r/2;
}