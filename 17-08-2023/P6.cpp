//6.REVERSE

#include<iostream>
using namespace std;
int main()
{
    char str[100],rev[100];
    int i,k,len=0,len1=0,j=0;
    cout<<"enter a string:";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        rev[j++]=str[i];
    }
    for(i=0;rev[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;i<len1;i++)
    {
        for(j=i+1;j<len1;j++)
        {
            if(rev[i]==rev[j])
            {
                for(k=j;k<len1;k++)
                {
                    rev[k]=rev[k+1];
                }
                len1--;
                j--;
            }
        }
    }
    cout<<rev;
}
