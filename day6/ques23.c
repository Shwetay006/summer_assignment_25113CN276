//count set bits in a number

#include<stdio.h>
int main()
{

    int n;
    printf("enter a number");
    scanf("%d",&n);

    int count=0;

    while(n>0)
    {
        if(n%2==1)
        {
            count++;

        }
        n=n/2;
    }
    printf("no. of set bits =%d",count);

    return 0;
}