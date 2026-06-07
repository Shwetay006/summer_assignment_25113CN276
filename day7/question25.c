//recursive factorial

#include<stdio.h>

int fact(int n) {

    //base case
    if(n==0|| n==1) {
        return 1;
    }

    //recursive case
    return n*fact(n-1);

}
int main() {
    int n;

    printf("enter a number");
    scanf("%d",&n);


    printf("factorial of %d\n",fact(n));

    return 0;
}
