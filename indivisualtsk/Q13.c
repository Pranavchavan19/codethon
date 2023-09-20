#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a month no=");
    scanf("%d",&n);
    switch(n)
    {
        case 11 :printf("\nArea of circle=");
        int pi=3.14,r=2;
          int  a= pi*r*r;
            printf("%d",a);
        break;
        case 22 :printf("\nArea of rectangle");
        int l=2,b=3;
        int v=l*b;
         printf("%d",v);
        break;
        case 33 :printf(" \nArea of square");
        int i=3;
        int s=i*i*i*i;
        printf("%d",s);

        break;
        case 44 :printf("\nArea of triangle");
        int len=2,br=3;
        int t=1/2*len*br;
        printf("%d",t);

        break;
       
       default :break;
       


    }
}