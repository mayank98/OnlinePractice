#include <bits/stdc++.h>
using namespace std;

#define RAND 223
#define N 1000000
#define MAXVAL 1000000
#define INF 1000000

int arr[N];
int i,Size;

void siftDown(int idx)
{
    int lVal,rVal;
    int l=2*idx+1;
    int r=2*idx+2;
    if(l<Size)
        lVal=arr[l];
    else
        lVal=-INF;
    if(r<Size)
        rVal=arr[r];
    else
        rVal=-INF;
    if(arr[idx]!=max(arr[idx],max(lVal,rVal)))
    {
        if(lVal>rVal)
        {
            swap(arr[l],arr[idx]);
            siftDown(l);
        }
        else
        {
            swap(arr[r],arr[idx]);
            siftDown(r);
        }
    }
    else
        return;
}

void buildHeap()
{
    for(i=N/2-1;i>=0;i--)
        siftDown(i);
}

int main()
{
    srand(RAND);
    for(i=0;i<N;i++)
    {
        arr[i]=rand()%MAXVAL;
        //cout << arr[i] << " ";
    }
    Size=N;
    buildHeap();
    cout << endl;
    //for(i=0;i<N;i++)
      //  cout << arr[i] << " ";
    for(Size=N;Size>0;Size--)
    {
        siftDown(0);
        swap(arr[0],arr[Size-1]);
    }
    cout << endl;
    //for(i=0;i<N;i++)
      //  cout << arr[i] << " ";
}
