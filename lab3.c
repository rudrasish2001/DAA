#include <stdio.h>
int main()
{
    int n, i, j, k, temp;
    int arr[100];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
                for (k = 0; k<=n-1;k++)
                 {
                 	printf("%d\t",arr[k]);
				 }
				printf("\n");
            }
    }
    printf("Sorted list in order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}