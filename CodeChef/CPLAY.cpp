#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str;
    // while(getline(cin,str))
    char str[25];
    while(scanf("%s",str)==1 && !feof(stdin))
    {
        int i,a=0,b=0;
        for(i=0;i<5;i++)
        {
            a+=str[2*i]-'0';
            if(b+5-i<a)
            {
                printf("TEAM-A %d\n",2*i+1);
                break;
            }
            if(a+4-i<b)
            {
                printf("TEAM-B %d\n",2*i+1);
                break;
            }
            b+=str[2*i+1]-'0';
            if(b+4-i<a)
            {
                printf("TEAM-A %d\n",2*i+2);
                break;
            }
            if(a+4-i<b)
            {
                printf("TEAM-B %d\n",2*i+2);
                break;
            }
        }
        if(i<5) continue;
        for(i=5;i<10;i++)
        {
            a+=str[2*i]-'0';
            b+=str[2*i+1]-'0';
            if(a>b)
            {
                printf("TEAM-A %d\n",2*i+2);
                break;
            }
            if(b>a)
            {
                printf("TEAM-B %d\n",2*i+2);
                break;
            }
        }
        if(i<10) continue;
        printf("TIE\n");
    }
}