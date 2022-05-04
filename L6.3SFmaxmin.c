#include<stdio.h>
#include<time.h>
struct pair
{
  int min;
  int max;
}; 
 
struct pair getMinMax(int arr[], int n)
{
  struct pair minmax;    
  int i;
  if (n == 1)
  {
     minmax.max = arr[0];
     minmax.min = arr[0];    
     return minmax;
  }   
 
  if (arr[0] > arr[1]) 
  {
      minmax.max = arr[0];
      minmax.min = arr[1];
  } 
  else
  {
      minmax.max = arr[1];
      minmax.min = arr[0];
  }   
 
  for (i = 2; i<n; i++)
  {
    if (arr[i] >  minmax.max)     
      minmax.max = arr[i];
   
    else if (arr[i] <  minmax.min)     
      minmax.min = arr[i];
  }
   
  return minmax;
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
  struct pair minmax = getMinMax (arr, size);
  t = clock()-t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;

  printf("\nMinimum element is %d", minmax.min);
  printf("\nMaximum element is %d", minmax.max);
  printf("\nIt took %f seconds to execute\n",time_taken);
  getchar();
} 
