//the number is prime or not

#include<stdio.h>
int main()
{

    int n;

    printf("enter the number");
    scanf("%d",&n);

    int i=2,count=0;
    for(i=2;i<=n/2;i++)
    {
count++;
    }
    if(count==0){
    printf("the number is prime %d",count);
}

    else
    printf("the number is not prime %d",count);

    return 0;
}