/*Let A be a list of n (not necessarily distinct) integers. Write a program by using User
Defined Function(UDF)s to test whether any item occurs more than
n/2 times in A.
a) UDF should take O(n2) time and use no additional space.
b) UDF should take O(n) time and use O(1) additional space.*/

#include<stdio.h>
#include<stdlib.h>
int moreThanHalf1(int *arr,int n)
{
int res=-1,count,i,j;
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])
{
count++;
}
}
if(count>(n/2))
{
res=arr[i];
}
}
return res;
}
int candidate(int *arr,int n)
{
int max_index=0,count=1,i;
for(i=1;i<n;i++)
{
if(arr[max_index]==arr[i])
{
count++;
}
else{
count--;
}
if(count==0)
{
max_index=i;
count=1;
}
}
return arr[max_index];
}
int moreThanHalf2(int *arr,int n)
{
int cand = candidate(arr,n);
int count =0,i;
for(i=0;i<n;i++)
{
if(arr[i]==cand)
{
count++;
}
}
if(count>(n/2))
{
return cand;
}
return -1;
}
int main()
{
int n,*arr,i;
printf("Enter Size of Array:- ");
scanf("%d",&n);
arr= (int *)malloc(n * sizeof(int));
printf("Enter Elements in the array:- \n");
for(i=0;i<n;i++)
{
printf("Enter Element %d: ",i+1);
scanf("%d",&arr[i]);
}
printf("By first Algo\n"); int maj1 = moreThanHalf1(arr,n);
if(maj1!=-1)
{
printf("Element Occuring more than n/2 times = %d\n",maj1);
}
else{
printf("No Such Element Found\n");
}
printf("By Second Algo\n");
int maj2= moreThanHalf2(arr,n);
if(maj2!=-1)
{
printf("Element Occuring more than n/2 times = %d\n",maj2);
}
else{
printf("No Such Element Found\n");
} }
