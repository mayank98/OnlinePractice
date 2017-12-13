#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,q,i;
        cin >> n >> q;
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",a+i);
        int blockSize=sqrt(n);
        int m=ceil(1.0*n/blockSize);
        map <int,int> block[m];
        int j=0;
        for(i=0;i<n;i++)
        {
            if(i>=(j+1)*blockSize) j++;
            if(block[j].count(a[i])>0)
                block[j][a[i]]++;
            else
                block[j][a[i]]=1;
        }
        while(q--)
        {
            int type,l,r;
            cin >> type >> l >> r;
            l--; r--;
            if(type==2)
            {
                r++;
                j=(l+1)/blockSize;
                if((l+1)%blockSize==0) j--;
                block[j][a[l]]--;
                if(block[j][a[l]]==0)
                    block[j].erase(a[l]);
                if(block[j].count(r)>0)
                    block[j][r]++;
                else
                    block[j][r]=1;
                a[l]=r;
                continue;
            }
            j=(l+1)/blockSize+1;
            if((l+1)%blockSize==0) j--;
            int k=(r+1)/blockSize-1;
            float m=0.5*(a[l]+a[r]);
            float m2=0.5*abs(a[l]-a[r]);
            float critcal=m2;
            for(i=l;i<j*blockSize;i++)
                critcal=min(critcal,abs(m-(float)a[i]));
            for(i=(k+1)*blockSize;i<=r;i++)
                critcal=min(critcal,abs(m-(float)a[i]));
            for(i=j;i<=k;i++)
            {
                auto it=block[i].lower_bound(m);
                if(it!=block[i].end())
                {
                    critcal=min(critcal,abs(m-(float)(it->first)));
                    auto it2=it;
                    it2++;
                    if(it2!=block[i].end())
                        critcal=min(critcal,abs(m-(float)(it2->first)));
                }
                if(it!=block[i].begin())
                {
                    auto it1=it;
                    it1--;
                    critcal=min(critcal,abs(m-(float)(it1->first)));
                }
            }
            cout << (int)((m2*m2)-(critcal*critcal)) << endl;
        }
    }
} 