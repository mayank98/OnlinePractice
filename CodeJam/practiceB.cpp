#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream output("output small.o");
    ifstream input("B-large-practice.in");
    int t;
    input >> t;
    string s;
    getline(input,s);
    for(int test=1;test<=t;test++)
    {
        string str;
        getline(input,str);
        reverse(str.begin(),str.end());
        istringstream iss(str);
        string strOut="";
        while(iss)
        {
            string temp;
            iss >> temp;
            reverse(temp.begin(),temp.end());
            strOut=strOut+temp+" ";
        }
        output << "Case #" << test << ": " << strOut << endl;
    }
}
