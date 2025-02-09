#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x ==1 || x==0)
        return 1;
    for(i=1;i<=x;i++)
    {
    if(x%i==0)
    {
        printf("Not Prime");
    }   
    else
    {
        printf("Prime");
    }
    }
}