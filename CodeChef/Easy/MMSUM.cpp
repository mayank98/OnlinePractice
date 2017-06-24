#include <bits/stdc++.h>
using namespace std;

bool allNeg(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
		if(arr[i]>0)
			return false;
	return true;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
    	long long n,i;
        cin >> n;
        long long arr[n];
        for(i=0;i<n;i++)
        	cin >> arr[i];
        if(allNeg(arr,n))
        {
        	long long M=arr[0];
        	for(i=0;i<n;i++)
        		M=max(M,arr[i]);
        	cout << M << endl;
        	continue;
        }
        long long maxSum=0,tempMax=0;
        long long s,be,en;
        for(i=0;i<n;i++)
        {
        	tempMax=tempMax+arr[i];
        	if(tempMax<0)
        	{
        		tempMax=0;
        		s=i+1;
        	}
        	if(tempMax>maxSum)
        	{
        		maxSum=tempMax;
        		be=s;
        		en=i;
        	}
        }
        long long sum1=maxSum,sum2=maxSum,sum3=maxSum;
        long long m=0;
        if(be!=en)
        {
        	for(i=be;i<=en;i++)
                m=min(m,arr[i]);
        	sum2=sum2-m;
        }
        long long M1=0,M2=0,sum=0;
        for(i=be-1;i>=0;i--)
        {
            sum=sum+arr[i];
            M1=max(M1,sum);
        }
        if(be>0)
            sum1=sum1-arr[be-1];
        sum1=sum1+M1;
        sum=0;
        for(i=en+1;i<n;i++)
        {
            sum=sum+arr[i];
            M2=max(M2,sum);
        }
        if(en<n-1)
            sum3=sum3-arr[en+1];
        sum3=sum3+M2;
        cout << max(max(max(max(sum1,sum2),sum3),M1-m),M2-m) << endl;
    }
}
