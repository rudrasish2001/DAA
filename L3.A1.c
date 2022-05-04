/*Write a program to test whether a number n, entered through
keyboard is prime or
not by using different algorithms you know for
atleast 10 inputs and note down the time
complexity by
step/frequency count method for each algorithm & for each
input.Finally make a comparision of time complexities found for
different inputs, plot an
appropriate graph & decide which
algorithm
is faster.
ALGORITHM 1:*/

#include <stdio.h>
#include <time.h>
void prime(int n)
{
int i, c = 0; 
for (i = 1; i <= n; i++)
{
if (n % i == 0)
{
c++;
}
}
if (c == 2)
{
printf("\n%d is a Prime number", n);
printf("\n");
}
else
{
printf("\n%d is not a Prime number", n);
printf("\n");
}
}
void main()
{
time_t t;
int i;
t = clock();
int n;
for(i=0;i<10;i++)
{
printf("Enter a number: %d\n",i+1);
printf("\n");
scanf("%d", &n);
prime(n);
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("It took %f units to execute \n",
time_taken);
}
}
