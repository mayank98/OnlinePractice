#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream output("output large.o");
    ifstream input("A-large-practice.in");
    int t;
    input >> t;
    for(int test=1;test<=t;test++)
    {
        int c,n;
        input >> c >> n;
        int arr[n];
        int i,j;
        for(i=0;i<n;i++)
            input >> arr[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==c)
                    break;
            }
            if(j<n)
                break;
        }
        output << "Case #" << test << ": " << i+1 << " " << j+1 << endl;
    }
}
