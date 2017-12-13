#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "mayank";
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        int temp,cnt=0;
        for (i = 0; i < n*n; i++)
        {
            cin >> temp;
            if(temp==0)
                cnt++;
        }
        for(i=0;;i++)
        {
            temp=i*(i+1);
            int temp2=(i+1)*(i+2);
            if((cnt>=temp)&&(cnt<temp2))
                break;
        }
        cout << n-(i+1) << endl;
    }
}
