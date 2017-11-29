#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    vector <int> cnt(n+1,0);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int j=0;
    int ans=0;
    set <int> st;
    for(i=1;i<=n && j<n;i++)
    {
        if(cnt[i]>0)
            continue;
        while(cnt[a[j]]<2)
        {
            st.insert(a[j]);
            j++;
        }
        if(a[j]>i)
        {
            cnt[a[j]]--;
            cnt[i]++;
            a[j]=i;
            st.insert(i);
            j++;
            ans++;
            continue;
        }
        for(;j<n;j++)
        {
            bool flag=(st.find(a[j])!=st.end());
            st.insert(a[j]);
            if(cnt[a[j]]>1 && (flag || a[j]>i))
            {
                cnt[a[j]]--;
                cnt[i]++;
                a[j]=i;
                st.insert(i);
                j++;
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    for(i=0;i<n;i++)
        cout << a[i] << " ";
}