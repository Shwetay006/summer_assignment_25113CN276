//maximum number
#include<stdio.h>
int max(int a, int b)
{
  if(a>b)
  return a;
  else
  return b;
}

int main()
{
    int x,y;

    printf("enter two numbers");
    scanf("%d",&x,&y);

    printf("the maximum no. is %d",max(x,y));

    return 0;
}