#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,ax,ay,bx,by,cx,cy;
    cin >>n>>ax>>ay>>bx>>by>>cx>>cy;

    if((bx-ax)*(cx-ax)>0 && (by-ay)*(cy-ay)>0)
        cout << "YES";
    else
        cout << "NO";
}