//gcd of two number

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter a two number");
    scanf("%d%d",&a,&b);


    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
printf("gcd=%d",a);

return 0;

}