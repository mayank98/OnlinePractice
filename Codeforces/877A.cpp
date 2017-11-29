#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string names[5]={"Danil", "Olya", "Slava", "Ann", "Nikita"};
    int i,cnt=0;
    for(i=0;i<5;i++)
    {
        auto found=str.find(names[i]);
        if(found!=string::npos)
            cnt++;
        found=str.find(names[i],found+1);
        if(found!=string::npos)
            cnt++;
    }
    if(cnt==1)
        cout << "YES";
    else
        cout << "NO";
}