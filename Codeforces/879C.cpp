#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,i;
    // cin >> n;
    scanf("%d",&n);
    char c[n];
    int a[n];
    for(i=0;i<n;i++)
        // cin >> c[i] >> a[i];
        scanf(" %c %d",c+i,a+i);

    int myxor=0;
    int myor=0;
    int myand=1023;
    for(int j=0;j<10;j++)
    {
        int res[2]={0,1};
        for(i=0;i<n;i++)
        {
            int bit=(a[i]>>j)&1;
            if(c[i]=='&')
            {
                res[0]=res[0]&bit;
                res[1]=res[1]&bit;
            }
            else if(c[i]=='|')
            {
                res[0]=res[0]|bit;
                res[1]=res[1]|bit;
            }
            else
            {
                res[0]=res[0]^bit;
                res[1]=res[1]^bit;
            }
        }
        if(res[0]==0 && res[1]==0)
            myand=myand-(1<<j);
        if(res[0]==1 && res[1]==1)
            myor=myor+(1<<j);
        if(res[0]==1 && res[1]==0)
            myxor=myxor+(1<<j);
    }
    printf("3\n^ %d\n| %d\n& %d",myxor,myor,myand);
}