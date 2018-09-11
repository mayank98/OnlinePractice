#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll n,i;
    cin >> n;
    multiset <ll> a,b;

    for(i=0;i<n;i++)
    {
        ll temp;
        cin >> temp;
        a.insert(temp);
    }

    for(i=0;i<n;i++)
    {
        ll temp;
        cin >> temp;
        b.insert(temp);
    }

    ll sumA=0,sumB=0;

    for(i=0;!(a.empty() && b.empty());i++)
    {
        ll maxA = a.empty() ? 0 : *a.rbegin();
        ll maxB = b.empty() ? 0 : *b.rbegin();

        if(i&1) // B's turn
        {
            if(maxB>maxA)
            {
                sumB+=maxB;
                b.erase(b.find(maxB));
            }
            else
                a.erase(a.find(maxA));
        }
        else
        {
            if(maxA>maxB)
            {
                sumA+=maxA;
                a.erase(a.find(maxA));
            }
            else
                b.erase(b.find(maxB));
        }
    }

    cout << sumA-sumB;
}