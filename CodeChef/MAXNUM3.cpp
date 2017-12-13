#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i;
        string num;
        cin >> num;
        int n=num.size();
        int sum=0;
        for(i=0;i<n;i++)
            sum+=(num[i]-'0');
        int d=num[n-1]-'0';
        int d2=num[n-2]-'0';
        if(d&1)
        {
            if(d2&1)
                cout << "-1\n";
            else if((sum-d)%3==0)
                cout << num.substr(0,n-1) << endl;
            else
                cout << "-1\n";
            continue;
        }
        int pos;
        bool notFound=true;
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1 && d2&1)
                continue;
            if((sum-(num[i]-'0'))%3==0 && notFound)
            {
                pos=i;
                notFound=false;
            }
            if((sum-(num[i]-'0'))%3==0 && num[i+1]>num[i])
                pos=i;
        }
        if(notFound)
            cout << "-1\n";
        else
            cout << num.substr(0,pos)+num.substr(pos+1,string::npos) << endl;
    }
}