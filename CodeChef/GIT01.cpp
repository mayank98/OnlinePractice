#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n,m,i,j;
        cin >> n >> m;
        string cake[n];
        for(i=0;i<n;i++)
            cin >> cake[i];
        bool flag1,flag2;
        int cost1=0,cost2=0;
        flag1=true;
        for(i=0;i<n;i++)
        {
            flag1=!flag1;
            flag2=flag1;
            for(j=0;j<m;j++)
            {
                flag2=!flag2;
                if(flag2 && cake[i][j]=='G')
                    cost1+=3;
                if(!flag2 && cake[i][j]=='R')
                    cost1+=5;
            }
        }
        flag1=false;
        for(i=0;i<n;i++)
        {
            flag1=!flag1;
            flag2=flag1;
            for(j=0;j<m;j++)
            {
                flag2=!flag2;
                if(flag2 && cake[i][j]=='G')
                    cost2+=3;
                if(!flag2 && cake[i][j]=='R')
                    cost2+=5;
            }
        }
        cout << min(cost1,cost2) << endl;
    }
}