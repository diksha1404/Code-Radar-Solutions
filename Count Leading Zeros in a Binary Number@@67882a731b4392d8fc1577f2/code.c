// Your code here...
#include<stdio.h>
int main()
{
    unsigned int number;
    int count = 0;
    scanf("%u",&number);
    for(int i=31;i>=0;i--)
    {
        if((number >> i) & 1)
        {
            break;
        }
        else
        {    
            count++;
        } 
    }
    printf("%d",count);
    return 0;
}