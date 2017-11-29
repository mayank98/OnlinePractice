#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t;
    cin >> n >> k >> t;
    if(t<=k)
        cout << t;
    else if(t>n)
        cout << n+k-t;
    else
        cout << k;
}
