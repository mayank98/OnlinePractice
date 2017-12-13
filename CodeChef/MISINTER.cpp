#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long i,n;
        cin >> n;
        bool isOdd=(n%2==1);
        if(isOdd)
            n--;
        bool visited[n+1];
        long long adjList[n]={0};
        for(i=1;i<=n;i++)
            visited[i]=false;
        long long m=n/2;
        for(i=1;i<=m;i++)
        {
            adjList[i]=2*i;
            adjList[m+i]=2*i-1;
        }
        long long cc=0;
        for(i=1;i<=n;i++)
        {
            long long j=i;
            if(!visited[j])
                cc++;
            while(!visited[j])
            {
                visited[j]=true;
                j=adjList[j];
            }
        }
        if(isOdd)
            cc++;
        cout << cc << endl;
    }
}
