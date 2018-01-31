#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n,m;
    cin >> n >> m;
    if(n>30)
        cout << m;
    else
        cout << m%((ll)pow(2,n));
}