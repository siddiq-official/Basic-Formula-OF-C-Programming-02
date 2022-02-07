#include<stdio.h>

void print_star (int m)
{   int i,j,k;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=m*2-1;k>=2*i-1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{   int n;
    printf("plase give your range\n");
    scanf("%d",&n);
    print_star(n);
    return 0;
}
