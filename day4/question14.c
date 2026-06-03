//fibonacci series upto n terms

#include<stdio.h>

int main()
{
    int n;
    printf("enterr the numbers");
    scanf("%d",&n);

    int i,a=0,b=1,c;
    
    printf("fibonacci series upto n terms = %d",n);

    for ( i = 1; i <=n; i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}