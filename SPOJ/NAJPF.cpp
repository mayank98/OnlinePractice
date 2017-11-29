#include <bits/stdc++.h>
using namespace std;

void computeLPS(int lps[],string pat)
{
    int m=pat.size();
    int i=1,j;
    while(i<m)
    {
        j=lps[i-1];
        while(pat[i]!=pat[j] && j>0)
            j=lps[j-1];
        if(pat[i]==pat[j])
            lps[i]=j+1;
        else
            lps[i]=0;
        i++;
    }
}

int main()
{
    int i,j,t;
    cin >> t;
    while(t--)
    {
        string str,pat;
        cin >> str >> pat;
        int n=str.size(),m=pat.size();
        int lps[m];
        lps[0]=0;
        computeLPS(lps,pat);
        vector <int> pos;
        i=0,j=0;
        while(i<n)
        {
            if(str[i]==pat[j])
            {
                i++;
                j++;
                if(j==m)
                    pos.push_back(i-j);
            }
            else if(j>0)
                j=lps[j-1];
            else
                i++;
        }
        int l=pos.size();
        if(l==0)
        {
            cout << "Not Found\n";
            continue;
        }
        cout << l << endl;
        for(i=0;i<l;i++)
            cout << pos[i]+1 << " ";
        cout << endl;
    }
}
