#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t;
	cin >> t;
	while(t--)
	{
		long n,k,i,j;
		cin >> n >> k;
        long arr[k+1]={0};
        vector <long> ls[n];
        for(i=0;i<n;i++)
        {
            cin >> j;
            while(j--)
            {
                long m;
                cin >> m;
                ls[i].push_back(m);
            }
        }
        for(i=0;i<n;i++)
            for(j=0;j<ls[i].size();j++)
                arr[ls[i][j]]++;
        for(i=1;i<k+1;i++)
        {
            if(arr[i]<1)
                break;
        }
        if(i<k+1)
        {
            cout << "sad" << endl;
            continue;
        }
        bool flag=false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<ls[i].size();j++)
            {
                if(arr[ls[i][j]]==1)
                    break;
            }
            if(j==ls[i].size())
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout << "some";
        else
            cout << "all";
        cout << endl;
	}
}
