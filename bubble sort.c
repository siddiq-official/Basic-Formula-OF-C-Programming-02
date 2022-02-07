#include<stdio.h>
#include<math.h>

int main()

{
    int a[10]={11,5,3,4,9,1,7,8,6,12};
    int i,j,temp,x;
    for (j=1;j<=8;j++)
        {
        for(i=0;i<=9-j;i++)
        {
            if(a[i]>a[i+1])
            {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;

            }

        }
        }
        for( i=0; i<10; i++)
            {
                printf("%d ",a[i]);
            }
            return 0;
    }

