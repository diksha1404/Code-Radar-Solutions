// Your code here...
#include<stdio.h>
int main()
{
    int number,n;
    scanf("%d",&number);
    scanf("%d",&n);
    int bit = ~(1 << n);
    number = number & bit;
    printf("%d",number);
    return 0;
}