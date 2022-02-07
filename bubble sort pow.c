#include<stdio.h>
#include<math.h>

int main()

{
    int c,a[100];
    //int a[10]={11,5,3,4,9,1,7,8,6,12};
    int i,j,temp,x,n;

    printf("Enter number of elements\n");
    scanf("%d",&n);

    printf("Enter %d integers\n", n);
    for (c=0; c<n; c++)
    scanf("%d",&a[c]);

    printf("The numbers arranged are given below\n");
    for (j=1;j<=n;j++)
        {
           for(i=0;i<=n-j;i++)
           {
            if(a[i]>a[i+1])
            {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
            }

           }
        }
        for( i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }


        for(i=1;i=1;)
        {
            printf("\nSecond Number is: %d ",a[i]);
            break;
        }


        for(j=99;j=99;)
            {
                //printf("\n last Number is: %d ",a[j]);
                break;
            }
            x=pow(a[i],a[j]);
            printf("\nResult: %d",x);
            return 0;
    }

