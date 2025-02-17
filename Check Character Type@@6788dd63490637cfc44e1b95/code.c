#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if((x>='0') && (x<='9'))
    {
        printf("Digit \n");
    }
    else if((x>='A') && (x<='Z') || (x>='a') && (x<='z'))
    {
        if(x=='e'|| x=='a' || x=='i'|| x=='o' || x=='u' || x=='A' || x=='E' || x=='I' x=="O" || x=='U')
        {
            printf("Vowel \n");
        }
        else{
            printf("Consonant \n");
        }
    } 
    else{
        printf("Special Character \n");
    }
    return 0;
}