//palinfrome

#include<stdio.h>
int palindrome(int n)
{
    int rev=0,rem,temp;

    temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(rev==n)
    return 1;
    else
    return 0;
}

int main()
{
    int n;

    printf("enter a number");
    scanf("%d",&n);

    if(palindrome(n))
    printf("palindrome number");

    else
    printf("not a palindrome number");

    return 0;
}