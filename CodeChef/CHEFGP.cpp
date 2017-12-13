#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x,y;
        cin >> x >> y;
        int m=0,n=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a') m++;
            if(s[i]=='b') n++;
        }
        
        string ans="";
        if(m==n)
        {
            for(i=0;i<m;i++)
                ans+="ab";
            cout << ans << endl;
            continue;
        }

        bool invert=false;
        if(n>m)
        {
            invert=true;
            swap(m,n);
            swap(x,y);
        }

        string tempA="";
        string tempB="";
        for(i=0;i<x;i++)
            tempA+="a";
        for(i=0;i<y;i++)
            tempB+="b";

        if(m<=(n+1)*x)
        {
            if(x==1)
            {
                for(i=0;i<n;i++)
                    ans+="ab";
                ans+="a";
            }
            else
            {
                int k=(m-n)/(x-1);
                k=min(k,n);
                int rem=m-n-(k*(x-1));
                for(i=0;i<k;i++)
                    ans+=tempA+"b";
                for(i=0;i<n-k;i++)
                    ans+="ab";
                for(i=0;i<rem;i++)
                    ans+="a";
            }
        }
        else
        {
            for(i=0;i<n;i++)
                ans+=tempA+"b";
            int rem=m-(n*x);
            for(i=0;i<(rem/x);i++)
                ans+=tempA+"*";
            for(i=0;i<(rem%x);i++)
                ans+="a";
            if(rem%x==0)
                ans=ans.substr(0,ans.size()-1);
        }

        if(invert)
        {
            for(i=0;i<ans.size();i++)
            {
                if(ans[i]=='*') continue;
                if(ans[i]=='a') ans[i]='b';
                else ans[i]='a';
            }
        }
        cout << ans << endl;
    }
}