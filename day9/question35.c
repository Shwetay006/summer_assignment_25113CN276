#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a height of pattern");
    scanf("%d",&n);

    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%c",'A'+i-1);
        }
        printf("\n");
    }
    return 0;
}