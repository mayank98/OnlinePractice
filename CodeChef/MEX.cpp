#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,i;
        cin >> n >> k;
        set <int> st;
        for(i=0;i<n;i++)
        {
            int tmp;
            cin >> tmp;
            st.insert(tmp);
        }
        for(i=0;k!=0;i++)
        {
            if(st.find(i)==st.end())
            {
                st.insert(i);
                k--;
            }
        }
        for(i=0;;i++)
        {
            if(st.find(i)==st.end())
            {
                cout << i << endl;
                break;
            }
        }
    }
}