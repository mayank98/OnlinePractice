#include <bits/stdc++.h>
using namespace std;

#define N 100005

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int i,n;
        cin >> n;
        vector <int> a(n);
        vector <int> cnt(N,0);
        for(i=0;i<n;i++)
            cin >> a[i];
        vector <int> pos1,pos2;
        for(i=0;i<n;i++)
        {
            cnt[a[i]]++;
            if(cnt[a[i]]==1)
                pos1.push_back(i);
            else
                pos2.push_back(i);
        }
        int n1=pos1.size();
        int n2=pos2.size();
        vector <int> b(n);
        vector <int> a1(n1),a2(n2);

        if(n1==1)
        {
            b=a;
            cout << "0\n";
        }

        else if(n2==0)
        {
            b=a;
            rotate(b.begin(),b.begin()+1,b.end());
            cout << n << endl;
        }

        else if(n2==1)
        {
            for(i=0;i<n1;i++)
                a1[i]=a[pos1[i]];
            a2[0]=a[pos2[0]];
            int idx;
            for(i=0;i<n1;i++)
            {
                if(a1[i]!=a2[0])
                {
                    idx=i;
                    break;
                }
            }
            int k=a1[idx];
            a1.erase(a1.begin()+idx);
            rotate(a1.begin(),a1.begin()+1,a1.end());
            a1.insert(a1.begin()+idx,k);
            swap(a1[idx],a2[0]);
            for(i=0;i<n1;i++)
                b[pos1[i]]=a1[i];
            b[pos2[0]]=a2[0];
            
            if(n1==2)
                cout << "2\n";
            else
                cout << n << endl;
        }

        else
        {
            for(i=0;i<n1;i++)
                a1[i]=a[pos1[i]];
            for(i=0;i<n2;i++)
                a2[i]=a[pos2[i]];
            rotate(a1.begin(),a1.begin()+1,a1.end());
            rotate(a2.begin(),a2.begin()+1,a2.end());
            for(i=0;i<n1;i++)
                b[pos1[i]]=a1[i];
            for(i=0;i<n2;i++)
                b[pos2[i]]=a2[i];
            cout << n << endl;
        }

        for(i=0;i<n;i++)
            cout << b[i] << " ";
        cout << endl;
    }
}