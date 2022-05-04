#include <stdio.h>
#include <time.h>
int gcd(int a, int b)
{
return b == 0 ? a : gcd(b, a % b); 
}
void main()
{
time_t t;
t = clock();
int n1, n2;
printf("Enter number 1\n");
printf("\n");
scanf("%d", &n1);
printf("Enter number 2\n");
printf("\n");
scanf("%d", &n2);
printf("GCD of %d and %d is %d ", n1, n2, gcd(n1,
n2));
printf("\n");
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("fun() took %f seconds to execute \n",
time_taken);
}
