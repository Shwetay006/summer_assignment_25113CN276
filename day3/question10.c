//prime numbers in a range 

#include<stdio.h>
int main()
{
    //n is starting number and n1 is ending number
int n,n1;


    printf("enter the starting number ");
    scanf("%d",&n);
    printf("enter the end number ");
    scanf("%d",&n1);

    printf("prime number between %d and %d is %d\t",n,n1);

    int i,j,prime;
    for ( i= n; i <=n1; i++)
    {
        if(i<2)
        continue;

        prime=1;
       
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
     
        if(prime)
printf("%d",i);


    }
   return 0; 

}