#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int n,i,j=0;
    gets(a);
    n=strlen(a);
    char b[n];
    //printf("%c",a[n-1]);
    for(i=n-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    if(strcmp(a,b)==0)
    {
        printf("yes\n");
    }
    else
    {
         printf("No\n");
    }
    main();

}
