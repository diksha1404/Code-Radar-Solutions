// Your code here...
#include<stdio.h>
int main()
{
    int rows,i,j,num=1;
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d " ,num);
            num++;
        }
        printf("\n");

    }
    return 0;

}