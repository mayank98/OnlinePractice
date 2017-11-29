#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i;
    cin >> n >> x;
    vector <bool> arr(105,false);
    for(i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr[temp]=true;
    }
    int cnt=0;
    for(i=0;i<x;i++)
    {
        if(!arr[i])
            cnt++;
    }
    if(arr[x])
        cnt++;
    cout << cnt;
}