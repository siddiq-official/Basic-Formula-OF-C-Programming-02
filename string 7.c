#include<stdio.h>
void main()
{
    char a[20];
    char b[20];
    gets(a);
    gets(b);
    if(strcmp(a,b)==0)
    {
        printf("string are equal!!!\n");
    }
    else
        {
            printf("string are not equal!!!\n");
        }
}
