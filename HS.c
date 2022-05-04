#include <stdio.h>
#include <time.h>

  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

  void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }

  void heapSort(int arr[], int n) {
  	int i;
    for ( i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);


    for (i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);

      heapify(arr, i, 0);
    }
  }

  void printArray(int arr[], int n) {
  	int i;
    for (i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }

  int main(){
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
heapSort(arr ,size -1);

t = clock()-t;
double time_taken = ((double)t)/CLOCKS_PER_SEC;

printf("The Sorted Order is: ");
for(i=0;i<size;i++)
printf(" %d",arr[i]);
printf("\nHeap Sort() took %f seconds to execute\n",time_taken);
return 0;
}
