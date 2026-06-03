//fiboniacc series

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);

    int i,a=0,b=1,c;
    printf("fibonacci series");

    for ( i = 1; i <=n; i++)
    
        {
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
        }

    return 0;
}