#include <stdio.h>
int main()
{
    int sp,cp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("Profit");
    }
    else if(cp>sp)
    {
        printf("Loss");
    }
    else if(cp == sp)
    {
        printf("No Profit No Loss");
    }
}