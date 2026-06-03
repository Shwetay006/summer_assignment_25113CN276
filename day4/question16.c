// to print armstrong number in a range

#include<stdio.h>
#include<math.h>


int main()
{
    int n1,n2,n,temp,r,sum,count,digits,i;

    printf("enter the starting number");
    scanf("%d",&n1);

    printf("enter the ending number ");
    scanf("%d",&n2);

    for ( n = n1; n<=n2; n++)
    {
        temp=n;
        digits =0;

        while(temp!=0)
        {
            digits++;
            temp/=10;
        }

        temp=n;
        sum=0;

        while(temp!=0)
        {
            r=temp%10;
            sum+= (int)pow(r,digits);
            temp/=10;

        }
        if(sum==n)
        {
            printf("%d",n);
        }
    }
   return 0; 
}