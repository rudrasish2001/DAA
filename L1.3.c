#include<stdio.h>
#include<math.h>
void insertionsort(int arr[],int n)
{
int i,key,j,k;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
printf("%d",arr[j]);
arr[j+1]=arr[j];
j--;
}
for(k=0;k<=n-1;k++)
{
printf("%d\t",arr[k]);
printf("\n");
}
arr[j+1]=key;
}
}
void printArray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
int main()
{
int arr[30];
int i,j,n ;
n=sizeof(arr)/sizeof(arr[0]);
printf("Enter number of element you want to enter:\n");
scanf("%d",&n);
printf("Enter the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
insertionsort(arr,n);
printf("\n\nSorted Array is :\n");
printArray(arr,n);
return 0;
}
