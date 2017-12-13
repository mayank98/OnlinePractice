#include <bits/stdc++.h>
using namespace std;

long long n,l,r;

bool inRange(long long num)
{
    return (num>=l)&&(num<=r);
}

int main()
{
    scanf("%I64d %I64d %I64d",&n,&l,&r);
    long long i,arr[n];
    set <long long> distArr;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",arr+i);
        distArr.insert(arr[i]);
    }
    sort(arr,arr+n);
    long long minDiff=0;

    //changing l
    if(distArr.size()==n)
    {
        long long temp=arr[1]-arr[0];
        for(i=0;i<n-1;i++)
            temp=min(temp,arr[i+1]-arr[i]);
        minDiff=temp;
        l=max(l,temp+1);
    }
    //changing r
    r=min(r,arr[n-1]+arr[n-2]-1);

    long long ans=1,done=-1;
    for(i=1;i<n-1;i++)
    {
        if(inRange(arr[i]))
            if(arr[i]!=arr[i+1])
                ans++;
    }
    if((arr[0]!=arr[1])&&inRange(arr[0]))
        if(arr[0]>minDiff)
            ans++;
}
