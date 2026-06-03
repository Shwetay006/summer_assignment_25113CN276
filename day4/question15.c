// to check a armstrong number

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);

    int r,n1,sum=0,count=0;

    n1=n;
    while (n>0)
    {
        n=n/10;
        count++;
    }
       n=n1;
       while (n>0)
       {
        r=n%10;
        sum =sum +(int)pow(r,count);
        n=n/10;
       
       }
       printf("sum=%d\n",sum);

        if (sum==n1)
        
        printf("the number is armstrong %d",n1);

        else
        printf("the number is not armstrong %d",n1);

        return 0;
        
       }
       



