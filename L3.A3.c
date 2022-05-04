#include <stdio.h>
#include <time.h>
int prime[100] = {0},i,j; 
void primeSieve(int n)
{
for (i = 2; i <= n; i++)
{
if (prime[i] == 0)
{
for (j = i * i; j <= n; j += i)
{
prime[j] = 1;
}
}
}
}
int main()
{
int n = 100, i,j;
time_t t;
t = clock();
primeSieve(n);
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
for(j=0;j<10;j++)
{
printf("Enter a number:\n",i+1);
printf("\n");
scanf("%d", &i);
double time_taken = ((double)t) / CLOCKS_PER_SEC;
if (prime[i] == 0)
{
printf("%d is a prime number.", i);
printf("\n");
}
else
{
printf("%d is not a prime number.", i);
printf("\n");
}
printf("It took %f units to execute \n",
time_taken);
}
return 0;
}
