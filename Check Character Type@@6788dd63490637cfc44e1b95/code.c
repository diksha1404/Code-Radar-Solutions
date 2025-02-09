#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x == a || x == e || x == i || x == o || x == u)
    {
        printf("Vowel");
    }
    else if(x!=a || x!=e || x!=i || x!=o || x!=u)
    {
        printf("Consonants");
    }
    else if(x==1 || x==2 || x==3 || x=4 || x==5 || x==6 || x==7 || x==8 || x==9)
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}