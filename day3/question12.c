//lcm of the two numbers

#include<stdio.h>
int main()
{
    int a,b;

    printf("enter the two numbers");
    scanf("%d %d",&a,&b);
int n1=a,n2=b,gcd,lcm;
while (n2 != 0)
{
    int temp=n2;
    n2=n1%n2;
    n1=temp;
}
   gcd=n1;
   lcm=(a*b)/gcd;


   printf("gcd=%d\n",gcd);
   printf("lcm=%d",lcm);

   return 0;
}