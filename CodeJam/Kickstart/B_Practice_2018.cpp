#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed;
    // cout << setprecision(16);
    
    ifstream cin("B-small-practice.in");
    ofstream cout("output small.o");
    ll t;
    cin >> t;
    for(ll test=1;test<=t;test++)
    {
        cout << "Case #" << test << ": ";
        ll k;
        cin >> k;
        string s3="0010011";
        if(k<8)
        {
            cout << s3[k-1] << endl;
            continue;
        }
        ll i;
        for(i=1;;i++)
        {
            ll len=((ll)1<<i)-1;
            if(len>=k)
                break;
        }
        bool reverse=false;
        while(k>7)
        {
            ll power=((ll)1<<(i-1));
            if(k<power)
                i--;
            else if(k>power)
            {
                reverse=(!reverse);
                k=2*power-k;
                i--;
            }
            else
            {
                if(reverse)
                    cout << 1;
                else
                    cout << 0;
                break;
            }
        }
        if(k<=7)
        {
            if(!reverse)
                cout << s3[k-1];
            else
                cout << (s3[k-1]=='1' ? 0 : 1);
        }
        cout << endl;
    }
}