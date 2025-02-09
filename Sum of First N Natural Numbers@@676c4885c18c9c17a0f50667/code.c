#include <stdio.h>
int main()
{
    int i,n,s;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s = s + i;
    }
    printf("%d",s);
}