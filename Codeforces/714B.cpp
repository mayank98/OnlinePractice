#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    set <int> st;
    for(i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    if(st.size()>3)
    {
        cout << "NO";
        return 0;
    }
    if(st.size()<3)
    {
        cout << "YES";
        return 0;
    }
    auto it=st.begin();
    int a=*it;
    int b=*(++it);
    int c=*(++it);
    if(2*b==a+c)
        cout << "YES";
    else
        cout << "NO";
}