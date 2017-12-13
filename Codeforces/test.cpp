#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{3,5,4,1,2};
    cout << "3,5,4,1,2 is a permutation of 1,2,3,4,5? "
                << boolalpha
                << is_permutation(v1.begin(), v1.end(), v2.begin()) << '\n';
 
    vector<int> v3{3,5,4,1,1};
    cout << "3,5,4,1,1 is a permutation of 1,2,3,4,5? "
                << boolalpha
                << is_permutation(v1.begin(), v1.end(), v3.begin()) << '\n';
}