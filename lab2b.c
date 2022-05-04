#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    int c=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);

    if(n>=1)
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
            c=c+1;
        }
    }
    else if(n==0)
        printf("0!=1");

    printf(" Count of recursive function=%d\n",c);
    return fact;
}

int main()
{
    int n ;
    printf("The Factorial of %d is %lu", n, factorial(n));
    return 0;
}
