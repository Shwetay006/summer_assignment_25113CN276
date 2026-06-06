//decimal to binary

#include<stdio.h>
int main()
{

    int n;
    printf("take a number");
    scanf("%d",&n);

    int a[10],i=0,j;
    int rem;

    while(n>0)
    {
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    for ( j = i-1; j >=0; j--)
    {
        printf("%d",a[j]);

    }
    return 0;
    
}
