#include <bits/stdc++.h>
using namespace std;

#define N 1000001
bool *sieve=new bool[N];

pair <long long,long long> numDiv(long long n)
{
	long long i;
	if(n==1)
		return make_pair(1,0);
	long long ans=1;
	long long div;
	bool flag=false;
	for(i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			if(!flag)
			{
				div=i;
				flag=true;
			}
			ans=ans+2;
		}
	}
	if(i*i==n)
		ans++;
	if((!flag)&&(i*i==n))
	{
		div=i;
		flag=true;
	}
	if(!flag)
		div=1;
	return make_pair(div,ans);
}

int main()
{
    long long a,b,i,j;
    /*
    for(i=2;i<N;i++)
        sieve[i]=true;
    for(i=2;i<N;i++)
    {
        if(sieve[i])
        {
            for(j=i*i;j<N;j=j+i)
                sieve[j]=false;
        }
    }
    */
	//cin >> a >> b;
	//cin >> a;
	long long ans=0;
	///*
	a=(b=1000000000000);
	for(i=a;i<=b;i++)
	{
		long long subAns=0;
		if(i==1)
			continue;
		j=i;
		pair <long long,long long> temp;
		while((temp=numDiv(j)).first!=1)
		//while(numDiv(j).first!=1)
		{
		    //if(temp.first==1)
            //    break;
			//pair <long long,long long> temp=numDiv(j);
			subAns=subAns+temp.second+1;
            cout << j << " "<<temp.second << endl;
			j=j/temp.first;
		}
		subAns=subAns+2;
		ans=ans+subAns;
	}
	cout << ans << endl;
	//*/
	//pair <long long,long long> temp=numDiv(12);
	//cout << temp.first << " " <<temp.second;
}
