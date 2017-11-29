#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,a,b;
    cin >> n;
    long long y[n+1];
    bool visited[n+1];
    for(i=1;i<=n;i++)
    {
        cin >> y[i];
        visited[i]=false;
    }
    visited[1]=true;
    for(i=1;i<=n;i++)
    {
        if(visited[i])
            continue;
        // cout << "for i=" << i;
        visited[i]=true;
        bool temp_visited[n+1];
        for(j=1;j<=n;j++)
            temp_visited[j]=false;
        temp_visited[1]=(temp_visited[i]=true);
        // if(temp_visited[2])
            // cout << "visited 2";
        for(j=1;j<=n;j++)
        {
            // cout << "inside";
            if(temp_visited[j])
                continue;
            // cout << j;
            a=(y[j]-y[1])*(i-1);
            b=(y[i]-y[1])*(j-1);
            if(a==b)
            // {cout << j << endl;
                visited[j]=(temp_visited[j]=true);
        }
        long long num=0;
        for(j=1;j<=n;j++)
            if(temp_visited[j]) num++;
        // cout <<"first check" <<num << endl;
        if(num==n)
        {
            // cout << "here";
            cout << "No";
            return 0;
        }
        if(num==n-1)
        {
            cout << "Yes";
            return 0;
        }
        long long l,m;
        for(j=1;j<=n;j++)
        {
            if(!temp_visited[j])
            {
                l=j;
                temp_visited[l]=true;
                break;
            }
        }
        for(j=1;j<=n;j++)
        {
            if(!temp_visited[j])
            {
                m=j;
                temp_visited[m]=true;
                break;
            }
        }
        // cout << l << m << endl;
        a=(y[l]-y[m])*(i-1);
        b=(y[i]-y[1])*(l-m);
        if(a!=b)
            continue;
        for(j=1;j<=n;j++)
        {
            if(temp_visited[j])
                continue;
            a=(y[j]-y[l])*(m-l);
            b=(y[m]-y[l])*(j-l);
            if(a==b)
                temp_visited[j]=true;
        }
        num=0;
        for(j=1;j<=n;j++)
            if(temp_visited[j]) num++;
        // cout << num << endl;
        if(num==n)
        {
            cout << "Yes";
            return 0;
        }
    }
    for(i=4;i<=n;i++)
    {
        a=(y[3]-y[2])*(i-2);
        b=(y[i]-y[2])*(3-2);
        if(a!=b)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
