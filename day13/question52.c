#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int even=0,odd=0;

    printf("enter number of elements");
    scanf("%d",&n);

    printf("enter array element");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("even elements=%d\n",even);
    printf("odd elements %d",odd);

    return 0;
}