#include <bits/stdc++.h>
using namespace std;

const long long MOD = pow(2,32);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,i;
        cin >> n;
        long long k=MOD/(n+1);
        vector <long long> arr(n,k);
        for(i=0;i<MOD%(n+1);i++)
            arr[i]++;
        arr[1]=arr[1]+(arr[0]/2);
        arr[0]=ceil(arr[0]/2);
        for(i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}