#include "bits/stdc++.h"
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    if(n&1)
        printf("%d\n",(3*n-1)/2);
    else
        printf("%d\n",(3*n)/2);
    for(i=2;i<n+1;i+=2)
        printf("%d ",i);
    for(i=1;i<n+1;i+=2)
        printf("%d ",i);
    for(i=2;i<n+1;i+=2)
        printf("%d ",i);
}