//product of digits

#include<stdio.h>
int main() 
{
    int n;
    printf("enter a number");
    scanf("%d",&n); 
 
    int r,product=1;
    while(n>0)
{
    //digit
    r=n%10;
    
    product=product*r;

    n=n/10;
}

printf("the product of the digit is %d",product);

return 0;
}