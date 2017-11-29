#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;
    cin >> n >> m;
    string str;
    cin >> str;
    int totPeriods=0;
    int groups=0;
    for(i=0;i<n-1;i++)
    {
        if(str[i]=='.')
            totPeriods++;
        if(str[i]=='.' && str[i+1]!='.')
            groups++;
    }
    if(str[n-1]=='.')
    {
        groups++;
        totPeriods++;
    }
    while(m--)
    {
        int x;
        char c;
        cin >> x >> c;
        x--;
        bool left=0,right=0;
        if(str[x]!='.' && c=='.')
        {
            totPeriods++;
            if(x>0 && str[x-1]=='.')
                left=1;
            if(x+1<n && str[x+1]=='.')
                right=1;
            if(left+right==2)
                groups--;
            if(left+right==0)
                groups++;
        }
        if(str[x]=='.' && c!='.')
        {
            totPeriods--;
            if(x>0 && str[x-1]=='.')
                left=1;
            if(x+1<n && str[x+1]=='.')
                right=1;
            if(left+right==2)
                groups++;
            if(left+right==0)
                groups--;
        }
        str[x]=c;
        cout << totPeriods-groups << endl;
    }
}
