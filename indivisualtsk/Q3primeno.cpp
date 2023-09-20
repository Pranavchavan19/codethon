#include<iostream>
using namespace std;
int main()
{
     cout<<"\n prime no bet 1 to 10=";
    int c=0;
    int cube;
    for(int i=1;i<=10;i++)
    {
         int c=0;
        for(int j=1;j<=10;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<" " <<i;
        }
    }
    
}
