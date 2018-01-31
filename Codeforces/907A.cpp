#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll v1,v2,v3,vm;
    cin >> v1 >> v2 >> v3 >> vm;

    for(ll f=v1;f<=2*v1;f++)
        for(ll m=v2;m<=2*v2;m++)
            for(ll s=v3;s<=2*v3;s++)
            {
                if(f>2*vm && m>2*vm && s>=vm && 2*vm>=s && f>m && m>s)
                {
                    cout << f << endl << m << endl << s;
                    return 0;
                }
            }
    cout << -1;
}