#include<stdio.h>
void main()
{
    char a[20];
    char b[20];
    gets(a);
    strrev(a);
    strcpy(b,a);
    puts(a);
    puts(b);
}

