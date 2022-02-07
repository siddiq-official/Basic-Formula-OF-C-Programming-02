#include<stdio.h>
void main()
{
    int i,j,row,col;
    printf("enter row rang\n");
    printf("enter col rang\n");
    scanf("%d %d",&row,&col);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<col+i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

