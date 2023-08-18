//5.PEPSI VENDING MACHINE

#include<iostream>
using namespace std;
int main()
{
    int cap=200,stock=15,n,i;
    char ch;
    do
    {
        cout<<"How many pepsi bottles do you want?";
        cin>>n;
        if(n<=stock)
        {
            for(i=0;i<n;i++)
            {
                cout<<"Take it :)\n";
            }
            cout<<"Have a good drink...\n";
            stock-=n;
        }
        else
        {
            for(i=0;i<stock;i++)
            {
                cout<<"Take it :)\n";
            }
            n-=stock;
            stock=0;
            if(n!=0)
            {
                cout<<"\nOut of stock...\n";
            }
            cout<<"Have a good drink...\n";
        }
        cout<<"do you want continue(y/n):";
        cin>>ch;
    }while(ch=='y');
    cout<<"\nTHANK YOU";
}
