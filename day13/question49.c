#include<stdio.h>
 
int main()
{
    int arr[100],n,i;

    printf("enter number of elements ");
    scanf("%d",&n);
    
    //input array

    for ( i = 0; i <n; i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("array element are \n");

    //display array

    for ( i = 0; i < n; i++)
    {
       printf("%d",arr[i]);
    }
    
    return 0;
    
}