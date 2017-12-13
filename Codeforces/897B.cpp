#include "bits/stdc++.h"
using namespace std;

int main()
{
    int k,p;
    cin >> k >> p;
    vector <string> nums[6];
    int i,j;

    for(char c='0';c<='9';c++)
    {
        string temp="";
        temp+=c; temp+=c;
        nums[1].push_back(temp);
    }
    for(i=2;i<=5;i++)
    {
        for(j=0;j<nums[i-1].size();j++)
        {
            for(char c='0';c<='9';c++)
            {
                string temp="";
                temp+=c;
                temp+=nums[i-1][j];
                temp+=c;
                nums[i].push_back(temp);
            }
        }
    }

    set <long long> ans;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<nums[i].size();j++)
        {
            if(nums[i][j][0]=='0')
                continue;
            ans.insert(stoll(nums[i][j]));
        }
    }
    ans.insert(100000000001);

    long long cnt=0,sum=0;
    for(auto it=ans.begin();cnt<k;it++)
    {
        sum=(sum+(*it))%p;
        cnt++;
    }
    cout << sum;
}