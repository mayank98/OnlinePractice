#include "bits/stdc++.h"
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    if(n==2)
    {
        printf("3\n1 2 1");
        return 0;
    }
    printf("%d\n",2*(n-1));
    for(i=2;i<n+1;i++)
        printf("%d ",i);
    for(i=1;i<n;i++)
        printf("%d ",i);
}