#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int largest,smallest;

    printf("enter number of elements");
    scanf("%d",&n);

    for ( i = 0; i < n ; i++)
    {
       printf("enter element %d ",i+1);
       scanf("%d",&arr[i]);
    }

    largest=smallest=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }

        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }

    }

    printf("largest %d\n",largest);
    printf("smallest %d",smallest);

    return 0;
}