#include <stdio.h>
int main()
{
    char a;
    scanf("%d",&a);
    if(a >= 'A' && a <= 'Z')
    {
        printf("Lowercase");
    }
    else
    {
        printf("Uppercase");
    }
}