//check prime 

#include<stdio.h>
int prime(int a)
{
    int i;

    if(a<=1)
    return 0;

    for ( i = 2; i < a; i++)
    {
        if(a%i==0)
        return 0;
    }

    return 1;
}
int main()
{
    int n;
    printf(" enter a no. ");
    scanf("%d",&n);

    if(prime(n))
    printf("the number is prime no.");

    else
    printf("the number is not prime no.");

    return 0;
}