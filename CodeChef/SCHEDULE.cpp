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
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        if((arr[1]-arr[0])!=1)
            cout << arr[0] << endl;
        else if((arr[n-1]-arr[n-2])!=1)
            cout << arr[n-1] << endl;
        else
        {
            i=0;
            while(arr[i]!=arr[i+1])
                i++;
            cout << arr[i] << endl;
        }
    }
}
