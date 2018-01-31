#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    for(int k=0;pow(2,2*k+1)-pow(2,k)<=n;k++)
    {
        int temp=pow(2,2*k+1)-pow(2,k);
        if(n%temp==0)
            ans=temp;
    }
    cout << ans;
}