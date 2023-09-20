#include<iostream>
using namespace std;
int main()
{
    cout<<" \n Fibonacii series upto 1 to 8=";
    int a=0,b=1;
    int c;
    for(int i=1;i<=7;i++)
    {
        cout<<" "<<a;
        c=a+b;
        a=b;
        b=c;
    }
    
    }
   
