//binary to decimal


#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf(" enter a binary number");
    scanf("%d",&n);
  int dec=0,rem,i=0;
  //dec=decimal and rem=reminder

  while(n>0)
  {
    rem=n%10;
    dec+=rem*(int)pow(2,i);
    n/=10;
    i++;
  }

  printf("decimal =%d",dec);

  return 0;
}