//recursive sum of digits

#include<stdio.h>

int sum_digits( int n)
{
  if(n==0){
    return 0;
  }

  return (n%10)+ sum_digits(n/10);

}
int main()
{
    int n;

    printf("enter a no. ");
    scanf("%d",&n);

    printf("sum of digits %d",sum_digits(n));

    return 0;
}