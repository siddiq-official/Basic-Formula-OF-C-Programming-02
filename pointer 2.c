#include<stdio.h>
void main()
{
    int a=10,*p,**q;
    p=&a;
    q=&p;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",q);

}
