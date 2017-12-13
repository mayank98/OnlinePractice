#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        int X[n],Y[n];
        for(i=0;i<n;i++)
            cin >> X[i];
        for(i=0;i<n;i++)
            cin >> Y[i];
        int sum=0,ans1=0,ans2=0;
        for(i=0;i<n;i=i+2)
            ans1=ans1+X[i];
        for(i=1;i<n;i=i+2)
            ans1=ans1+Y[i];
        for(i=0;i<n;i++)
            sum=sum+X[i]+Y[i];
        ans2=sum-ans1;
        cout << min(ans1,ans2) << endl;
    }
}
