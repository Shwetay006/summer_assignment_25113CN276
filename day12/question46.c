#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int temp,rem,sum=0,digits=0;

    temp=n;

    while(temp!=0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(int)pow(rem,digits);
        temp=temp/10;
    }
    if(sum==n)
    return 1;

    else
    return 0;
}

int main()
{
    int n;

    printf("enter a no.");
    scanf("%d",&n);

    if(armstrong(n))
    printf("armstrong number");
    else
    printf("not an armstrong number");

    return 0;
}