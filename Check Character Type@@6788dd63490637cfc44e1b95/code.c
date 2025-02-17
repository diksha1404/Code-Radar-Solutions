#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if((x<='9') && (x>='0'))
    {
        printf("Digits \n");
    }
    else if((x>='A') && (x<='Z') || (x>='a') && (x<='z'))
    {
        if(x=='e'|| x=='a' || x=='i'|| x=='o' || x=='u' || x=='A' || x=='E' || x=='I' x=="O" || x=='U')
        {
            printf("Vowels \n");
        }
        else{
            printf("Consonants \n");
        }
    } 
    else{
        printf("Special Character");
    }
}