#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    
    ll n,m;
    cin >> n >> m;
    string a[n];
    ll start_x,start_y;
    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]=='S')
            {
                start_x=i;
                start_y=j;
            }
        }
    }
    string s;
    cin >> s;

    ll mapping[]={0,1,2,3}; // {l,r,u,d}

    ll cnt=0;
    do
    {
        ll pos_x=start_x,pos_y=start_y;
        ll i;
        for(i=0;i<s.size();i++)
        {
            ll idx=s[i]-'0';
            if(mapping[0]==idx)
                pos_y--;
            if(mapping[1]==idx)
                pos_y++;
            if(mapping[2]==idx)
                pos_x--;
            if(mapping[3]==idx)
                pos_x++;
            if(pos_x<0 || pos_x>=n || pos_y<0 || pos_y>=m || a[pos_x][pos_y]=='#')
                break;
            if(a[pos_x][pos_y]=='E')
            {
                cnt++;
                break;
            }
        }
    } while(next_permutation(mapping,mapping+4));

    cout << cnt;
}