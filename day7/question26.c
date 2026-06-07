//recursive fibonacci

#include<stdio.h>

int fibo(int n)
{
    if(n==0) {

        return 0;
    }

    else if(n==1){
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}

int main()
{
    int n,i;

    printf("enter a no. of terms");
    scanf("%d",&n);

    printf("fibonacci series is ");

    for ( i = 0; i < n; i++)
    {
       printf("%d",fibo(i));
    }

    return 0;
    
}