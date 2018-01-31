#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    map <string,set<string> > book;
    for(ll i=0;i<n;i++)
    {
        string temp;
        ll k;
        cin >> temp >> k;
        if(book.count(temp)<=0)
            book[temp].clear();
        for(ll j=0;j<k;j++)
        {
            string phone;
            cin >> phone;
            book[temp].insert(phone);
        }
    }
    cout << book.size() << endl;
    for(auto it=book.begin();it!=book.end();it++)
    {
        string name=it->first;
        cout << name << " ";
        auto temp=it->second;
        vector <string> nums;
        for(auto it1=temp.begin();it1!=temp.end();it1++)
            nums.push_back(*it1);
        ll tot=nums.size();
        for(ll i=0;i<tot;i++)
        {
            for(ll j=0;j<tot;j++)
            {
                if(i==j) continue;
                string str1=nums[i];
                string str2=nums[j];
                // check if str2 is suffix of str1
                if(str1.rfind(str2)==string::npos) continue;
                ll idx=str1.rfind(str2);
                if(idx+str2.size()==str1.size())
                {
                    nums[j]="a";
                }
            }
        }
        ll cnt=0;
        for(ll i=0;i<tot;i++)
        {
            if(nums[i][0]=='a') continue;
            cnt++;
        }
        cout << cnt << " ";
        for(ll i=0;i<tot;i++)
        {
            if(nums[i][0]=='a') continue;
            cout << nums[i] << " ";
        }
        cout << endl;
    }
}