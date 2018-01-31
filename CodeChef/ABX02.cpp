#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
 
ll p,q,n,b1,b2,s1,s2;
ll dp1[51][51][51][51];
ll dp2[51][51][51][51];
 
ll start_with_box1(ll p,ll q,ll b1,ll b2,ll n);
ll start_with_box2(ll p,ll q,ll b1,ll b2,ll n);
 
ll start_with_box1(ll p,ll q,ll b1,ll b2,ll n)
{
    if(dp1[p][q][b1][b2]!=-1)
        return dp1[p][q][b1][b2];
    if((p==0 || b1==0) && n!=0)
    {
        dp1[p][q][b1][b2]=0;
        return 0;
    }
    if(n==0)
    {
        dp1[p][q][b1][b2]=1;
        return 1;
    }
    ll ans=0;
    for(ll i=1;i<=min(p,min(s1,n));i++)
        ans=(ans+start_with_box2(p-i,q,b1-1,b2,n-i))%MOD;
    dp1[p][q][b1][b2]=ans;
    return ans;
}
 
ll start_with_box2(ll p,ll q,ll b1,ll b2,ll n)
{
    if(dp2[p][q][b1][b2]!=-1)
        return dp2[p][q][b1][b2];
    if((q==0 || b2==0) && n!=0)
    {
        dp2[p][q][b1][b2]=0;
        return 0;
    }
    if(n==0)
    {
        dp2[p][q][b1][b2]=1;
        return 1;
    }
    ll ans=0;
    for(ll i=1;i<=min(q,min(s2,n));i++)
        ans=(ans+start_with_box1(p,q-i,b1,b2-1,n-i))%MOD;
    dp2[p][q][b1][b2]=ans;
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> p >> q >> n >> b1 >> b2 >> s1 >> s2;
        b1=min(b1,p);
        b2=min(b2,q);
        for(ll i1=0;i1<p+1;i1++)
            for(ll i2=0;i2<q+1;i2++)
                for(ll i3=0;i3<b1+1;i3++)
                    for(ll i4=0;i4<b2+1;i4++)
                    {
                        dp1[i1][i2][i3][i4]=-1;
                        dp2[i1][i2][i3][i4]=-1;
                    }
        cout << (start_with_box1(p,q,b1,b2,n)+start_with_box2(p,q,b1,b2,n))%MOD << endl;
    }
}