#include <bits/stdc++.h>
using namespace std;
//making a PRNG - pseudo random number generator
int main()
{
    //time(0) is the seed value, which changes every time as it is the no of seconds elapsed since a fixed time.
    //this makes the seed different resulting in different sequence every time.
    //however if we use srand(a fixed int), it will print the same sequence every time, as the seed is same.
    srand(time(0));
    for(int i=0;i<10;i++)
        cout << rand() << "\n";
}
