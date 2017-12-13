#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,i;
        cin >> n;
        long long a[n],sum=0;
        long long tempSum=0;
        
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            sum=sum+a[i];
        }
        
        sort(a,a+n);
        vector <long long> vals;
        long long ans=0;

        for(i=0;i<n;i++)
        {
        	ans=0;
        	tempSum+=a[i];
        	
        	if(tempSum<0)
        		ans+=tempSum;
        	else
        		ans+=tempSum*(i+1);
        	
        	if(sum-tempSum<0)
        		ans+=(sum-tempSum);
        	else
        		ans+=(sum-tempSum)*(n-i-1);
        	
        	vals.push_back(ans);
        }

        ans=vals[0];
        for(i=0;i<n;i++)
        	ans=max(ans,vals[i]);

        cout << ans << endl;
    }
}
