#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l1,r1,l2,r2,k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    long long ans;
    ans=min(r1,r2)-max(l1,l2)+1;
    if(k>=l1 && k<=r1 && k>=l2 && k<=r2)
        ans--;
    cout << max(ans,(long long)0);
}