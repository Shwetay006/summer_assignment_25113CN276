// to check strong number

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    int i,r,sum=0,fact,temp;
    temp=n;

    while(temp!=0)
    {
        r=temp%10;
        
        fact=1;

        for ( i = 1; i <=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }

    if (sum==n)
    {
      printf(" the number is strong number %d ",n);
    }
    else
    {
        printf("the number is not strong number %d",n);
    }
    
    return 0;

}