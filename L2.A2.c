#include <stdio.h>
#include <time.h>
int checkPrime(int number)
{
int count = 0;
for (int i = 2; i <= number / 2; i++)
{
if (number % i == 0)
{
count = 1;
break;
}
}
if (number == 1)
count = 1;
return count;
}
int main()
{
time_t t;
int i;
t = clock();
int number;
for(i=0;i<10;i++)
{
printf("Enter number %d\n",i+1);
printf("\n");
scanf("%d", &number);
if (checkPrime(number) == 0)
{
printf("%d is a prime number.", number);
printf("\n");
}
else
{
printf("%d is not a prime number.", number);
printf("\n");
}
t = clock() - t;
double time_taken = ((double)t) / CLOCKS_PER_SEC;
printf("fun() took %f units to execute \n",
time_taken);
}
return 0;
}
