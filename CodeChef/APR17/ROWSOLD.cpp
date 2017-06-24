#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t;
	cin >> t;
	while(t--)
	{
	    string str;
	    cin >> str;
		long i=0;
        //while(str[0]=='0')
        //    str.erase(0,1);
        while(str[i]=='0')
        {
            str[i]='-';
            i++;
        }
        str=str+"1";
        long n=str.size();
        vector <long> k,s;
        long temp=0;
        for(i=0;i<n-1;i++)
        {
        	if(str[i]=='1')
        		temp++;
        	if((str[i]=='1')&&(str[i+1]=='0'))
        	{
        		k.push_back(temp);
        		temp=0;
        	}
        }
        temp=0;
		for(i=0;i<n-1;i++)
        {
        	if(str[i]=='0')
        		temp++;
        	if((str[i]=='0')&&(str[i+1]=='1'))
        	{
        		s.push_back(temp);
        		temp=0;
        	}
        }
        //if(k.size()==s.size())
        //    cout << "fine\n";
        for(i=1;i<k.size();i++)
        	k[i]=k[i]+k[i-1];
        long long ans=0;
        for(i=0;i<k.size();i++)
        	ans+=k[i]*(s[i]+1);
        cout << ans << endl;
	}
}
