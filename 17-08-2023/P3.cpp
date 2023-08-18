//3.REMOVE DUPLICATE ELEMENTS IN AN ARRAY

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,a[50];
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
