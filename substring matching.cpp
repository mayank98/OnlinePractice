#include <bits/stdc++.h>
using namespace std;

//computing LPS array
void computeLPS(string text,string pattern,int lps[])
{
    int i=1;
    int len;
    lps[0]=0;
    int m=pattern.size();
    while(i!=m)
    {
        len=lps[i-1];
        while(pattern[i]!=pattern[len] && len>0)
            len=lps[len-1];
        if(pattern[i]=pattern[len])
            lps[i]=len+1;
        else
            lps[i]=0;
        i++;
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
            if(j==m)
                positions.push_back(i-j);
        }
        else if(j>0)
            j=lps[j-1];
        else
            i++;
    }
    return positions;
}

int main()
{
    string text="aaabbaaaa";
    string pattern="bb";
    /*
    for(i=0;i<10;i++)
        pattern+=pattern;
    for(i=0;i<120;i++)
        text+=text;
    cout << text.size();
    */
    vector <int> positions=KMPsearch(text,pattern);
    if(positions.size()==0)
        cout << "Not Found";
    else
    {
        for(int i=0;i<positions.size();i++)
            cout << positions[i] << " ";
    }
}
