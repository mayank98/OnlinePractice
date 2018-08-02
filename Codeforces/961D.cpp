#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    // memset(dp,-1,sizeof(dp));
    // cout << fixed << setprecision(16);

    ll i,n;
    cin >> n;
    ll x[n],y[n];
    
    for(i=0;i<n;i++)
        cin >> x[i] >> y[i];

    if(n<3)
    {
        cout << "YES";
        return 0;
    }

    ll a[n];
    for(i=0;i<n;i++)
        a[i]=0;
    a[0]=1;
    a[1]=1;
    ll lin=2;
    for(i=2;i<n;i++)
    {
        if((x[i]-x[0])*(y[1]-y[0])==(y[i]-y[0])*(x[1]-x[0]))
        {
            a[i]=1;
            lin++;
        }
    }
    if(lin>n-3)
    {
        cout << "YES";
        return 0;
    }

    ll idx1,idx2;
    for(i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            idx1=i;
            a[i]=1;
            break;
        }
    }
    for(i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            idx2=i;
            a[i]=1;
            break;
        }
    }

    lin+=2;
    for(i=2;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[idx1])*(y[idx2]-y[idx1])!=(y[i]-y[idx1])*(x[idx2]-x[idx1]))
            break;
        else
            lin++;
    }
    // if(lin==n)
    if(i==n)
    {
        cout << "YES";
        return 0;
    }

    for(i=0;i<n;i++)
        a[i]=0;
    a[0]=1;
    a[idx1]=1;

    lin=2;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[0])*(y[idx1]-y[0])==(y[i]-y[0])*(x[idx1]-x[0]))
        {
            a[i]=1;
            lin++;
        }
    }
    if(lin>n-3)
    {
        cout << "YES";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            idx1=i;
            a[i]=1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            idx2=i;
            a[i]=1;
            break;
        }
    }
    
    lin+=2;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[idx1])*(y[idx2]-y[idx1])!=(y[i]-y[idx1])*(x[idx2]-x[idx1]))
        {
            break;
        }
        //     break;
        // else
        //     lin++;
    }

    if(i==n)
    {
        cout << "YES";
        return 0;
    }

    //asdf

    for(i=0;i<n;i++)
        a[i]=0;
    a[0]=1;
    a[2]=1;

    lin=2;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[0])*(y[2]-y[0])==(y[i]-y[0])*(x[2]-x[0]))
        {
            a[i]=1;
            lin++;
        }
    }
    if(lin>n-3)
    {
        cout << "YES";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            idx1=i;
            a[i]=1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            idx2=i;
            a[i]=1;
            break;
        }
    }
    
    lin+=2;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[idx1])*(y[idx2]-y[idx1])!=(y[i]-y[idx1])*(x[idx2]-x[idx1]))
        {
            break;
        }
        //     break;
        // else
        //     lin++;
    }

    if(i==n)
    {
        cout << "YES";
        return 0;
    }

    //asdf

    for(i=0;i<n;i++)
        a[i]=0;
    a[2]=1;
    a[1]=1;

    lin=2;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[2])*(y[2]-y[1])==(y[i]-y[2])*(x[2]-x[1]))
        {
            a[i]=1;
            lin++;
        }
    }
    if(lin>n-3)
    {
        cout << "YES";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            idx1=i;
            a[i]=1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            idx2=i;
            a[i]=1;
            break;
        }
    }
    
    lin+=2;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        if((x[i]-x[idx1])*(y[idx2]-y[idx1])!=(y[i]-y[idx1])*(x[idx2]-x[idx1]))
        {
            break;
        }
        //     break;
        // else
        //     lin++;
    }

    if(i==n)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
    }
}