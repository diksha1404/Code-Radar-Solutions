// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    // int n = a;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        // a++;
        printf("\n");
    }
    return 0;
}