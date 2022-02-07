#include<stdio.h>
void main()
{
    int i,even=0,odd=0,s=0,t=0,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
       //for(;i=j;)
        if(i%2==0)
        {
            even=even+i;
            s++;
        }
        else
        {
            odd=odd+i;
            t++;
        }
      }
    printf("\nThe Total Number Of Even : %d\nThe Total Sum Of Even : %d\nThe Total Number Of Odd : %d\nThe Total Sum Of Odd : %d",even,s,odd,t);
}
