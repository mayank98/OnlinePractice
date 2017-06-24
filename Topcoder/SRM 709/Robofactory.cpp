#include <bits/stdc++.h>
using namespace std;

class Robofactory
{
public:
    int reveal(vector <int> query, vector <string> answer)
    {
        int i;
        int n=query.size();
        for(i=0;i<n;i++)
        {
            if(((query[i]%2==0)&&(answer[i]=="Even"))||((query[i]%2==1)&&(answer[i]=="Odd"))) {}
            else
                return i;
        }
        int cnt=0;
        for(i=1;i<n;i++)
        {
            if(query[i-1]%2==0)
                cnt++;
        }
        if(cnt>0)
            return -1;
        return 0;
    }
};

int main()
{
    Robofactory obj;
    vector <int> query={107};
    vector <string> answer={"Odd"};
    cout << obj.reveal(query,answer);
}
