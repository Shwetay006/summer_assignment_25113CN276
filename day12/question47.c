#include<stdio.h>
void fib(int n)
{
    int a=0,b=1,c,i;

    printf("fibonacci series\n");

    for(i=1;i<=n;i++)
    {
        printf("%d",a);

        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int n;

    printf("enter no. of terms");
    scanf("%d",&n);

    fib(n);

    return 0;
}