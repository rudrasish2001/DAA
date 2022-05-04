#include<stdio.h>
#include<math.h>
void insertionsort(int arr[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
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
int BinarySearch(int array[], int start_index, int
end_index, int element)
{
while (start_index <= end_index)
{
int middle = start_index + (end_index- start_index
)/2;
if (array[middle] == element)
return middle;
if (array[middle] < element)
start_index = middle + 1;
else
end_index = middle - 1;
}
return -1;
}
int main()
{

int i,j,n;
int arr[30];
n=sizeof(arr)/sizeof(arr[0]);

printf("Enter number of element you want to enter :\n");
scanf("%d",&n);
printf("Enter the elements :\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
insertionsort(arr,n);
printf("Sorted Array is :\n");
printArray(arr,n);
int element;
printf("Enter element whose address you want to find :\n");
scanf("%d",&element);
int found_index = BinarySearch(arr, 0, n-1, element);
if(found_index == -1 )
{
printf("Element not found in the array ");
}
else
{
printf("Element found at index : %d",found_index);
}
return 0;
}
