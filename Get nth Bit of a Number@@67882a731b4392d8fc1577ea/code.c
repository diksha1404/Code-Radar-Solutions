// Your code here...
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int bit = (x>y) & 1;
    printf("%d", bit);
    return 0;
}