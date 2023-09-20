#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
       cout<<"\n Even number=";
    
    for(int i=0;i<=8;i++)
    {
        for(int j=0;i<=8;i++)
    {
        if(a[i]%2==0)
        {
       cout<<"\n"<<a[i];
        }
    }
    }
     cout<<"\n Odd number=";
     for(int i=0;i<=8;i++)
    {
        for(int j=0;i<=8;i++)
    {
        if(a[i]%2!=0)
        {
       cout<<" \n"<<a[i];
        }
    }
    }
   
}
