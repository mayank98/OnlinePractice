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

int main()
{

}
