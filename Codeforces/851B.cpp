#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    long long c=pow(ax-bx,2)+pow(ay-by,2);
    long long a=pow(cx-bx,2)+pow(cy-by,2);
    long long m1=(by-ay)*(cx-ax);
    long long m2=(cy-ay)*(bx-ax);
    if(a==c && m1!=m2)
        cout << "Yes";
    else
        cout << "No";
}
