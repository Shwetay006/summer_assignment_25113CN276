//reverse number triangle

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the height of pattern");
    scanf("%d",&n);

    for ( i = 5; i >=1; i--)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
