//perfect number

#include<stdio.h>
int main()
{
    int n ;
    printf("enter a number");
    scanf("%d",&n);
int i,sum=0;
    for ( i = 1; i <n ; i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)

    printf("the number is perfect number %d",n);

    else
    printf("the number is not perfect number %d",n);

    return 0;
}