#include <stdio.h>
#include <time.h>
void gcd(int x, int y);
int main()
{
int a, b;
time_t t;
t = clock();
printf("Enter the first number : ");
scanf("%d", &a);
printf("Enter the second number : ");
scanf("%d", &b);
gcd(a, b);
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("fun() took %f seconds to execute \n",
time_taken);
return 0;
}
void gcd(int x, int y)
{
int c, ans = 1, m, n,i;
c = x >= y ? y : x;
for ( i = 2; i < c; i++)
{
n = 0;
m = 0;
if (x % i == 0)
{
n = 1;
x /= i;
}
if (y % i == 0)
{
m = 1;
y /= i;
}
if (n == 1 && m == 1)
{
ans *= i;
}
if (n == 1 || m == 1)
i--;
}
printf("GCD = %d\n", ans);
}
