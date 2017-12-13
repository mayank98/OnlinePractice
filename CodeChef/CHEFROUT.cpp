#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str,s;
        cin >> str;
        s=str;
        int n=str.size(),i;
        sort(s.begin(),s.end());
        for(i=0;i<n;i++)
        {
            if(str[i]!=s[i])
            {
                cout << "no" << endl;
                break;
            }
        }
        if(i==n)
            cout << "yes" << endl;
    }
}
