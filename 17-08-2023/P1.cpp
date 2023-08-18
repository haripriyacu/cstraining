//1.DIAGONAL ELEMENTS

#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,mat[50][50];
    cout<<"Enter rows:";
    cin>>m;
    cout<<"Enter columns:";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Diagonal elements:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<mat[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Upper Diagonal elements:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                cout<<mat[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Lower Diagonal elements:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                cout<<mat[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Non Diagonal elements:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                cout<<mat[i][j]<<"\t";
            }
            else
            {
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
}
