//x^n without pow

#include<stdio.h>
int main()
{
    int x,n;

    printf("base is ");
    scanf("%d",&x);

    printf("power is ");
    scanf("%d",&n);

    int i,a=1;
   //a is result
    for ( i = 1; i <=n; i++)
    {
      a=a*x;
    }

    printf("%d^%d=%d",x,n,a);

    return 0;
    
}