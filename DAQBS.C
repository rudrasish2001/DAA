#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
void BS1(int arr[],int l,int mid,int r){
int n1=mid-l+1;
int n2=r-mid;
int a[n1],b[n2];
for(int i=0;i<n1;i++)
a[i]=arr[l+i];
for(int i=0;i<n2;i++)
b[i]=arr[mid+1+i];
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2){
if(a[i]<b[j]){
arr[k]=a[i];
k++;
i++;
}
else{
arr[k]=b[j];
k++;
j++;
}
}
while(i<n1){
arr[k]=a[i];
k++;
i++;
}
while(j<n2){
arr[k]=b[j];
k++;
j++;
}
}
void BS(int arr[],int l, int r){
if(l<r){
int mid=(l+r)/2;
BS(arr,l,mid);
BS(arr,mid+1,r);
BS1(arr,l,mid,r);
}
}
void printArray(int A[], int s)
{
for (int i = 0; i < s; i++)
printf("%d ",A[i]);
printf("\n");
}
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l) {
int mid = (l+r)/2;
if (arr[mid] == x)
return mid;
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);
return binarySearch(arr, mid + 1, r, x);
}
return -1;
}
int main()
{
double best_cases[10],worst_cases[10],Avg_cases[10];
int inputs[10];
for(int i=0;i<10;i++){
clock_t s1,s2,s3,e1,e2,e3;
int n,key;
double
best_case,worst_case,Avg_case=0,min_time,max_time,t1,t2,t3;
printf("Enter the number of elements : \n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){

arr[i]=(rand() % (101 - 0 + 1)) + 0;
BS(arr,0,n-1);
}
printf("The Sorted array is : \n");
printArray(arr,n);
double times[10];
int mid=(n-1)/2;
key=arr[mid];
s1=clock();
Sleep(1);
int x=binarySearch(arr,0,n-1,key);
e1=clock();
if(x!=-1){
printf("%d is found at %d index\n",key,x);
}
else{
printf("%d is not present in the array\n",key);
}
t1=(double)(e1-s1)/CLOCKS_PER_SEC;
times[0]=t1;
key=arr[0];
s2=clock();
Sleep(1);
x=binarySearch(arr,0,n-1,key);
e2=clock();
if(x!=-1){
printf("%d is found at %d index\n",key,x);
}
else{
printf("%d is not present in the array\n",key);
}
t2=(double)(e2-s2)/CLOCKS_PER_SEC;
times[1]=t2;
for(i=2;i<10;i++){
printf("Enter the element to be searched.\n");
scanf("%d",&key);
s3=clock();
Sleep(1);
x=binarySearch(arr,0,n-1,key);
e3=clock();
t3=(double)(e3-s3)/CLOCKS_PER_SEC;
times[i]=t3;
if(x!=-1){
printf("%d is found at %d index\n",key,x);
}
else{
printf("%d is not present in the array\n",key);
}
}
min_time=times[0];
max_time=times[0];
for(i=0;i<10;i++)
if(times[i]>max_time)
max_time=times[i];
if(times[i]<min_time)
min_time=times[i];
Avg_case+=times[i];
}
best_case=min_time;
Avg_case=Avg_case/10;
worst_case=max_time;
best_cases[i]=best_case;
Avg_cases[i]=Avg_case;
worst_cases[i]=worst_case;
inputs[i]=n;
}
printf("\nInput\t\tBest Case\t\tWorstCase\t\t Average Case\n");
for(int i=0;i<10;i++){
printf("%d\t\t%f\t\t%f\t\t%f\n",inputs[i],best_cases[i],worst_cases[i],Avg_cases[i]);
}
}
