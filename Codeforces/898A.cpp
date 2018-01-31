#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll d=n%10;
    if(d>5)
        n+=10-d;
    else
        n-=d;
    cout << n;
}