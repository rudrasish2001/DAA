#include<stdio.h>
#include<time.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j){
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}
int main()
{
   clock_t t;
   t = clock();
int i, size, arr[100];
printf("Enter number of elements : ");
scanf("%d",&size);
for(i=0;i<size;i++)
    {
        arr[i]=rand()%100;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Displaying Array\n");
    for(i=0;i<size;i++)
    printf("%d\t",arr[i]);
quicksort(arr ,0,size-1);
t = clock()-t;
double time_taken = ((double)t)/CLOCKS_PER_SEC;

printf("\nThe Sorted Order is: ");
for(i=0;i<size;i++)
printf(" %d",arr[i]);
printf("\nQuick Sort() took %f seconds to execute\n",time_taken);
return 0;
}
