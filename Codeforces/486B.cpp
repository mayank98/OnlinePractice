#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int B[m][n];
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> B[i][j];
    bool allZeroes=false;
    bool notPoss=false;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(B[i][j]==1)
                break;
        }
        if(j==n)
        {
            allZeroes=true;
            break;
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            if(B[i][j]==1)
                break;
        }
        if(i==m)
        {
            allZeroes=true;
            break;
        }
    }
    if(allZeroes)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(B[i][j]==1)
                    break;
            }
            if(j<n)
            {
                notPoss=true;
                break;
            }
        }
        if(notPoss)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    cout << "0 "; 
                cout << endl;
            }
        }
        return 0;
    }
    bool zeroPres;
    for(j=0;j<n;j++)
    {
        zeroPres=false;
        for(i=0;i<m;i++)
        {
            if(B[i][j]==0)
            {
                zeroPres=true;
                break;
            }
        }
        if(!zeroPres)
            continue;
        for(i=0;i<m;i++)
        {
            if(B[i][j]==0)
                continue;
            int k;
            for(k=0;k<n;k++)
            {
                if(B[i][k]==0)
                    break;
            }
            if(k<n)
            {
                notPoss=true;
                break;
            }
        }
        if(notPoss)
            break;
    }
    if(notPoss)
    {
        cout << "NO\n";
        return 0;
    }
    int A[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            A[i][j]=0;
    for(j=0;j<n;j++)
    {
        zeroPres=false;
        for(i=0;i<m;i++)
        {
            if(B[i][j]==0)
            {
                zeroPres=true;
                break;
            }
        }
        if(zeroPres)
            continue;
        int k;
        for(i=0;i<m;i++)
        {
            for(k=0;k<n;k++)
            {
                if(B[i][k]==0)
                    break;
            }
            if(k==n)
                A[i][j]=1;
        }
    }
    cout << "YES\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}