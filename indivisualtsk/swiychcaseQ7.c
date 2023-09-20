#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a month no=");
    scanf("%d",&n);
    switch(n)
    {
        case 1 :printf("janewary");
        break;
        case 2 :printf("feburary");
        break;
        case 3 :printf(" march");
        break;
        case 4 :printf("april");
        break;
        case 5 :printf("may");
        break;
        case 6:printf("june");
        break;
        case 7 :printf("jully");
        break;
        case 8 :printf("augest");
        break;
        case 9 :printf("sepember");
        break;
        case 10 :printf("octomber");
        break;
        case 11 :printf("november");
        break;
        case 12:printf("december");
        break;
       default :break;
       


    }
}