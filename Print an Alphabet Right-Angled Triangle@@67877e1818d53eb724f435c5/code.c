// Your code here...
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    for(char i=1;i<=n;i++)
    {
        int a=1;
        for(char j=1;j<=n;j++)
        {
            print("%c",a+64);
            a++;
        }
        printf("\n");
    }
    return 0;
}