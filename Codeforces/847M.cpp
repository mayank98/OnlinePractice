#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    int d=a[1]-a[0];
    for(i=1;i<n;i++)
    {
        if(d!=a[i]-a[i-1])
            break;
    }
    if(i!=n)
        cout << a[n-1];
    else
        cout << a[n-1]+d;
}