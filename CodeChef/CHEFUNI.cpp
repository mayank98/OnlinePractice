#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long coord[3],a,b,c;
        cin >> coord[0] >> coord[1] >> coord[2] >> a >> b >> c;
        sort(coord,coord+3);
        b=min(b,2*a);
        c=min(c,min(a+b,3*a));
        long long x=coord[0];
        long long y=coord[1];
        long long z=coord[2];
        long long ans=(a*(x+y+z))+(y*(b-2*a));

        long long crit=x+y-z;
        if(crit<=0)
        {
            ans+=x*(b-2*a);
            if(a+c-2*b<0)
                ans+=x*(a+c-2*b);
        }
        else
        {
            long long temp1,temp2;
            temp1=((z-y)*(b-2*a))+((c-a-b)*crit);
            temp2=x*(b-2*a);
            if(a+c-2*b<0)
                temp2+=x*(a+c-2*b);
            else
                temp2+=crit*(a+c-2*b);
            ans+=min(temp1,temp2);
        }

        cout << ans << endl;
    }
}