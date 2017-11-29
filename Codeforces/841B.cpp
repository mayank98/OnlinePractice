#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n,k;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&k);
        if(k&1)
        {
            printf("First");
            return 0;
        }
    }
    printf("Second");
    return 0;
}
