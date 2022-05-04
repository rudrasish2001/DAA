/*Write a program by using an user defined function for computing root n for any
positive integer n. Besides assignment and comparison, your algorithm may
only use the  four basic arithmetical operations.*/


#include<stdio.h>
int sqrt_root(int n)
{
int res = 0;
if(n == 0 | n == 1)
return n;
int low = 1 , high = n;
while(low<=high)
{
int mid = (low + high)/2;
if(mid * mid == n)
return mid;
if(mid * mid <=n)
{
res = mid;
low = mid + 1;
}
else high = mid - 1;
}
return res;
}
int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
printf("square root of %d is %d",num,sqrt_root(num));
return 0;
}
