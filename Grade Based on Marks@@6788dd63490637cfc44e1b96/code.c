#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(90<=x<=100)
    {
        printf("A");
    }
    else if(80<=x<90)
    {
        printf("B");
    }
    else if(70<=x<80)
    {
        printf("C");
    }
    else if(60<=x<70)
    {
        printf("D");
    }
    else{
        printf("F");
    }
}