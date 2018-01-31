#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    bool done=false;
    for(ll i=0;i*a<=n;i++)
    {
        ll k=n-i*a;
        if(k%b==0)
        {
            done=true;
            printf("YES\n%lld %lld",i,k/b);
            break;
        }
    }
    if(!done)
        printf("NO");    
}