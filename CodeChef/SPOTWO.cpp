#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

unsigned long long fastModExp(unsigned long long base,unsigned long long exp)
{
    if(exp==0)
        return 1;
    unsigned long long temp = fastModExp(base,exp/2);
    unsigned long long ans = (temp*temp)%MOD;
    if(exp%2)
        return (ans*base)%MOD;
    return ans;
}

unsigned long long decTObin(unsigned long long n)
{
    unsigned long long ans=0;
    unsigned long long temp=1;
    int dig;
    while(n!=0)
    {
        dig=n%2;
        ans=ans+(dig*temp);
        n=n/2;
        temp=temp*10;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long n;
        cin >> n;
        unsigned long long exp=decTObin(n);
        unsigned long long temp=fastModExp(2,exp);
        cout << (temp*temp)%MOD << endl;
    }
}
