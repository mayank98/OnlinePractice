#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);

    ll i,h;
    cin >> h;
    ll a[h+1];
    for(i=0;i<h+1;i++)
        cin >> a[i];
    for(i=h;i>0;i--)
    {
        if(a[i-1]>1 && a[i]>1)
            break;
    }
    if(i==0)
    {
        cout << "perfect";
        return 0;
    }
    ll level=i;
    ll sum=1;

    string str1="0 ";
    for(i=1;i<level;i++)
    {
        for(ll j=0;j<a[i];j++)
            // str1+=to_string(sum-a[i-1]+1)+" ";
            str1+=to_string(sum)+" ";
        sum+=a[i];
    }

    string str2="";
    for(ll j=0;j<a[level];j++)
        // str2+=to_string(sum-a[level-1]+1)+" ";
        str2+=to_string(sum)+" ";

    string str3="";
    // str3+=to_string(sum-a[level-1]+1)+" ";    
    str3+=to_string(sum-1)+" ";    
    for(ll j=1;j<a[level];j++)
        // str3+=to_string(sum-a[level-1]+2)+" ";
        str3+=to_string(sum)+" ";

    sum+=a[level];
    string str4="";
    for(i=level+1;i<h+1;i++)
    {
        for(ll j=0;j<a[i];j++)
            // str4+=to_string(sum-a[i-1]+1)+" ";
            str4+=to_string(sum)+" ";
        sum+=a[i];
    }

    cout << "ambiguous" << endl;
    cout << str1+str2+str4 << endl;
    cout << str1+str3+str4;
}