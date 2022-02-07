#include<stdio.h>
int main()
{
    int i,j,n,temp,array[100];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
        {
        scanf("%d",&array[i]);
        }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(array[j]>array[j+1])
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;

        }
    }
    for(j=0;j<n;j++){
        printf("%d ",array[i]);
    }
}
