//1.FIRST PEAK ELEMENT...LINEAR SEARCH

#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if((i==0||a[i-1]<a[i])&&(i==n-1||a[i]>a[i+1]))
        {
            cout<<"peak element is "<<a[i]<<" at position "<<i+1;
            break;
        }
    }
    if(i==n)
    {
        cout<<"no peak element...";
    }
}
