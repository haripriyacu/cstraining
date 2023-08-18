//2.MOVE ALL ZEROES IN AN ARRAY TO THE END

#include<iostream>
using namespace std;
int main()
{
    int n,i,a[50],b[50],j=0,count=0;
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[j]=a[i];
            j++;
            count++;
        }
        else
        {
            cout<<a[i]<<"\t";
        }
    }
    for(i=0;i<count;i++)
    {
        cout<<b[i]<<"\t";
    }
}
