//largest prime number

#include<stdio.h>
int main()

{
    int n;
    printf("enter the numbers ");
    scanf("%d",&n);

    int n1,i,j;
    int largest=-1,isprime;

    for ( i = 1; i <=n; i++)
    {
        printf("enter no.");
        scanf("%d",&n1);

        isprime=1;

        if(n1<=1)
        {
            isprime=0;
        }
        else
        {
            for(j=2;j<n1;j++)
            {
                if(n1%j==0)
                {
                    isprime=0;
                    break;
                }
            }
      
        }

        if(isprime==1&&n1>largest)
        {
            largest=n1;
        }
    }
   
    if(largest==-1)
    {
        printf("no prime number is found");
    }
    else
    {
    printf("largest prime no. =%d",largest);
    }

    return 0;
}