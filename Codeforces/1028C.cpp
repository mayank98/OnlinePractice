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
    ll ax[n][2];
    ll ay[n][2];
    for(i=0;i<n;i++)
        cin >> ax[i][0] >> ay[i][0] >> ax[i][1] >> ay[i][1];

    ll leftx[n][2];
    leftx[0][0]=ax[0][0];
    leftx[0][1]=ax[0][1];

    for(i=1;i<n;i++)
    {
        ll l=max(ax[i][0],leftx[i-1][0]);
        ll r=min(ax[i][1],leftx[i-1][1]);
        if(r<l)
        {
            leftx[i][0]=MOD;
            leftx[i][1]=MOD;
        }
        else
        {
            leftx[i][0]=l;
            leftx[i][1]=r;
        }
    }

    ll rightx[n][2];
    rightx[n-1][0]=ax[n-1][0];
    rightx[n-1][1]=ax[n-1][1];

    for(i=n-2;i>=0;i--)
    {
        ll l=max(ax[i][0],rightx[i+1][0]);
        ll r=min(ax[i][1],rightx[i+1][1]);
        if(r<l)
            rightx[i][0]=(rightx[i][1]=MOD);
        else
        {
            rightx[i][0]=l;
            rightx[i][1]=r;
        }
    }

    ll lefty[n][2];
    lefty[0][0]=ay[0][0];
    lefty[0][1]=ay[0][1];

    for(i=1;i<n;i++)
    {
        ll l=max(ay[i][0],lefty[i-1][0]);
        ll r=min(ay[i][1],lefty[i-1][1]);
        if(r<l)
        {
            lefty[i][0]=MOD;
            lefty[i][1]=MOD;
        }
        else
        {
            lefty[i][0]=l;
            lefty[i][1]=r;
        }
    }

    ll righty[n][2];
    righty[n-1][0]=ay[n-1][0];
    righty[n-1][1]=ay[n-1][1];

    for(i=n-2;i>=0;i--)
    {
        ll l=max(ay[i][0],righty[i+1][0]);
        ll r=min(ay[i][1],righty[i+1][1]);
        if(r<l)
            righty[i][0]=(righty[i][1]=MOD);
        else
        {
            righty[i][0]=l;
            righty[i][1]=r;
        }
    }

    bool done=false;
    for(i=1;i<n-1;i++)
    {
        ll lx=max(leftx[i-1][0],rightx[i+1][0]);
        ll rx=min(leftx[i-1][1],rightx[i+1][1]);

        ll ly=max(lefty[i-1][0],righty[i+1][0]);
        ll ry=min(lefty[i-1][1],righty[i+1][1]);
        if(rx>=lx && ry>=ly && lx<MOD && ly<MOD)
        {
            cout << lx << " " << ly;
            done=true;
            break;
        }
    }

    if(done)
        return 0;

    ll lx=rightx[1][0];
    ll rx=rightx[1][1];
    ll ly=righty[1][0];
    ll ry=righty[1][1];

    if(rx>=lx && ry>=ly && lx<MOD && ly<MOD)
    {
        cout << lx << " " << ly;
        done=true;
        return 0;
    }

    lx=leftx[n-2][0];
    rx=leftx[n-2][1];
    ly=lefty[n-2][0];
    ry=lefty[n-2][1];
    
    if(rx>=lx && ry>=ly && lx<MOD && ly<MOD)
    {
        cout << lx << " " << ly;
        done=true;
        return 0;
    }
}