/*Let A be an array of n integers a0,a1,... ,an-1 (negative integers are allowed), denoted,
by A[i... j], the sub-array ai, ai+1,... ,aj for i.j. Also let Si-j denote the sum
ai + ai+1 +ÅE ÅE ÅE + aj.Write a programby using an udf that must run in O(n2) time to 
find out the maximumvalue of Si-j for all the pair i, j with 0.i.j.n-1. 
Call this maximum value S. Also obtains the maximum of these computed sums. 
Let j < i in the notation A[i... j] is alsoallowed. Inthis case, A[i... j] denotes 
the empty sub-array (that is, a sub-array that endsbefore it starts) with sum Si-j = 0.
Indeed, if all the elements of A are negative, then onereturns 0 as the maximum 
sub-array sum.
a. For example, for the array A[]={1, 3, 7, 2, 1, 5, 1, 2, 4, 6, 3}.
b. This maximum sum is S = S3-8 = 2+( 1)+5+( 1)+( 2)+4 = 7.*/


#include<stdio.h>
#include<stdlib.h>
void maxSum(int *arr,int n)
{
int start=0,end=0,sum,max_sum=-1,i,j;
for(i=0;i<n;i++)
{ sum=0;
for(j=i;j<n;j++)
{
sum+=arr[j];
if(sum>0 && sum>max_sum)
{
max_sum=sum;
start=i;
end=j;
}
}
}
if(max_sum<0)
{
printf("There Are all Negative Number in the array\n");
printf("Sum = 0\n");
}
else{
printf("Largest Sum = %d\n",max_sum);
printf("Sum is present between index %d and %d\n",start,end);
}
}
int main()
{
int *arr,n,i;
printf("Enter Size of array:- ");
scanf("%d",&n);
arr=(int *)malloc(n*sizeof(int));
printf("Enter Array Elements:\n");
for(i=0;i<n;i++)
{
printf("Enter Element %d: ",i+1);
scanf("%d",&arr[i]);
}
maxSum(arr,n);
return 0;
}
