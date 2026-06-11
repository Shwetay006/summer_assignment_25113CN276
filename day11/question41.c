#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;

    printf("enter two no.");
    scanf("%d%d",&x,&y);

    printf("the sum is %d",sum(x,y));

    return 0;
}