#include <stdio.h>
#include <time.h>
int gcd(int a, int b)
{
int i, c;
c = a >= b ? b : a;
for (i = c; i >= 1; i--)
{
if (a % i == 0 && b % i == 0)
{
return (i);
}
}
}
void main()
{
time_t t;
t = clock();
int a, b, ans;
printf("enter two numbers : \n");
scanf("%d%d", &a, &b);
ans = gcd(a, b);
printf("gcd = %d", ans);
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("fun() took %f seconds to execute \n",
time_taken);
}
