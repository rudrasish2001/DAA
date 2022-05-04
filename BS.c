#include <stdio.h>
#include<time.h>
int binarySearch(int arr[], int l, int r, int x)   
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;
        if (arr[m] > x)
            return binarySearch(arr,l,m-1,x);

        else
            return binarySearch(arr,l,m+1,x);

    }

    return -1;
}

int main()
{
    clock_t t;
    t = clock();
    int arr[10],i;
    int size;
    printf("Enter Size of array\n");
    scanf("%d",&size);
    printf("Enter integers into array:\n");
    for(i=0;i<size;i++)
    {
        arr[i]=rand()%100;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Displaying Array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the number you want to search\n");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    t = clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    if(result == -1)
    {
        printf("element not found\n");
    }
    else
    {
        printf("element found at index %d\n",result);
    }
    printf("\nbinarySearch() took %f seconds to execute\n",time_taken);
    return 0;
}
