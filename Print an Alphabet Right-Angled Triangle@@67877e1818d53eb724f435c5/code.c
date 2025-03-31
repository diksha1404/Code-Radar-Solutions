// Your code here...
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    for(char i=65;i<=n;i++)
    {
        for(char j=1;j<=n;j++)
        {
            print("%c",j);
        }
        printf("\n");
    }
    return 0;
}