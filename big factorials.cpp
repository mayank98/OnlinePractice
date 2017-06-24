#include <bits/stdc++.h>
using namespace std;

deque <int> multiplyDigit(deque <int> result,int n)
{
    int length=result.size();
    int i,carry=0,temp;
    for(i=length-1;i>=0;i--)
    {
        temp=carry+(result[i]*n);
        result[i]=temp%10;
        carry=temp/10;
    }
    if(carry)
        result.push_front(carry);
    return result;
}

deque <int> add(deque <int> num1,deque <int> num2)
{
    int len1=num1.size();
    int len2=num2.size();
    int j;
    if(len1>len2)
    {
        for(j=0;j<len1-len2;j++)
            num2.push_front(0);
    }
    if(len2>len1)
    {
        for(j=0;j<len2-len1;j++)
            num1.push_front(0);
    }
    int len=num1.size();
    deque <int> sum;
    sum.clear();
    int temp,carry=0;
    for(j=len-1;j>=0;j--)
    {
        temp=carry+num1[j]+num2[j];
        sum.push_front(temp%10);
        carry=temp/10;
    }
    if(carry)
            sum.push_front(carry);
    return sum;
}

deque <int> pushZeroes(deque <int> number,int i)
{
    int j;
    for(j=0;j<i;j++)
        number.push_back(0);
    return number;
}

deque <int> multiply(deque <int> result,int n)
{
    int i;
    deque <int> number=result;
    result.clear();
    for(i=0;n>0;i++)
    {
        result=add(pushZeroes(multiplyDigit(number,n%10),i),result);
        n=n/10;
    }
    return result;
}

int main()
{
    deque <int> result;
    result.clear();
    result.push_front(1);
    int n,i,len;
    cin >> n;
    for(i=n;i>1;i--)
        result=multiply(result,i);
    len=result.size();
    for(i=0;i<len;i++)
        cout << result[i];
}
