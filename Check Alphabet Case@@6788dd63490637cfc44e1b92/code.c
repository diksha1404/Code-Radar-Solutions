#include <stdio.h>
int main()
{
    char a;
    scanf("%d",&a);
    if('A'<=a<='Z')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
}