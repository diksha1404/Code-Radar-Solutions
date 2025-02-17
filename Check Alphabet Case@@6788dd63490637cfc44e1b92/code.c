#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if('A'<=x<='Z')
    {
        printf("Uppercase");
    }
    else if('a'<=x<='z')
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}