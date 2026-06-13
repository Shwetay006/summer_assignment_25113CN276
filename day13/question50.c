#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float avg;

    printf("enter number of elements");
    scanf("%d",&n);

    for ( i = 0; i < n ; i++)
    {
       printf("enter element %d ",i+1);
       scanf("%d",&arr[i]);

       sum=sum+arr[i];
    }

    avg=(float)sum/n;

    printf("sum=%d\n",sum);
    printf("average=%2f\n",avg);

    return 0;
    
}