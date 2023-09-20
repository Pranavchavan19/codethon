#include<iostream>
using namespace std;
int main()
{
    int max;
    int a[]={1,2,3,4,5,6};
    
    
    for(int i=1;i<5;i++)
    {
        
        for(int j=1;j<=5;j++)
        {
            if(a[i]>a[j])
            {
              int max = a[i];
              a[i]=a[j];
              a[j]=max;
            }
          
}   
        }
       cout<<max;
    }
  
