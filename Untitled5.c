#include<stdio.h>
void main()
{
    int a[2][3],r,c,i,j;
    scanf("%d" "%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
