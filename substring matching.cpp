#include <bits/stdc++.h>
using namespace std;

//computing LPS array
void computeLPS(string text,string pattern,int lps[])
{
    int i=1;
    int len=0;
    lps[0]=0;
    int m=pattern.size();
    while(i!=m)
    {
        if(pattern[i]=pattern[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;
            }
            else
                len=lps[len-1];
        }
    }
}

//implementing KMP algorithm
vector <int> KMPsearch(string text,string pattern)
{
    int n=text.size();
    int m=pattern.size();

    //array lps[i] stores the length of the longest proper prefix suffix of pattern[0...i].
    int lps[m];
    computeLPS(text,pattern,lps);

    int i=0;
    int j=0;
    vector <int> positions;

    while(i!=n)
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j>0)
                j=lps[j-1];
            else
                i++;
        }
        if(j==m)
        {
            positions.push_back(i-j);
            j=lps[j-1];
        }
    }
    return positions;
}

int main()
{
    string text="ababababababababa";
    string pattern="ab";
    int i;
    /*
    for(i=0;i<10;i++)
        pattern+=pattern;
    for(i=0;i<120;i++)
        text+=text;
    cout << text.size();
    */
    vector <int> positions=KMPsearch(text,pattern);
    for(i=0;i<positions.size();i++)
        cout << positions[i] << " ";
}
