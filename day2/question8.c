//number is pallindrome or not 

#include<stdio.h>
int main()
{

    int n;
    printf("enter a number");
    scanf("%d",&n);

    int n1,r,rev=0;
    n1=n;
    while(n>0){

        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

if(n1==n){
    printf("the number is pallindrome %d",n1);
}
    else
     
    printf("the number is not pallindome %d",n1);




return 0;
}