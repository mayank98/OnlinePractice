#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,f,k;
    cin >> a >> b >> f >> k;
    long long be=0,en=a,i1=b,i2;
    long long i,ans=0;
    bool poss=true;
    for(i=0;i<k-1;i++)
    {
        if(i1>=f && (i1>=a || b>=a-f))
        {
            i2=i1-a;
            if(i2>=a-f && (i2>=a || b>=f))
            long long x=b-(a-f),y=i1-a;
        }
        else
        {
            poss=false;
            break;
        }
        be=a-be;
        en=a-en;
        f=a-f;
    }
    if(b<f || b<a-f)
    {
        cout << -1;
        return 0;
    }
}