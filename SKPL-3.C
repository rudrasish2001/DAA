#include<stdio.h>
#define MAX_660 1000

int main()
{
    int arr_660[MAX_660],i_660,n_660,j_660;
    printf("Enter size of the array\n");
    scanf("%d",&n_660);
    printf("Enter elements into array:\n");
    for(i_660=0;i_660<n_660;i_660++)
    {
        scanf("%d",&arr_660[i_660]);
    }
    printf("\nElements of array array are: ");
    for(i_660=0;i_660<n_660;i_660++)
    {
        printf("%d, ",arr_660[i_660]);
    }

    // Finding Duplicate arrays
    printf("\nDuplicate elements:\n");
    for(i_660=0;i_660<n_660;i_660++)
    {
        for(j_660=i_660+1;j_660<n_660;j_660++)
        {
            if(arr_660[i_660]==arr_660[j_660])
                printf("%d\t",arr_660[j_660]);
        }
    }
    // Maximum repeating element
    printf("\nMaximum repeating element:\n");
    int mr_660 = arr_660[0],res_660=0;
    for(i_660=1;i_660<n_660;i_660++)
    {
        if(arr_660[i_660]>mr_660)
        {
            mr_660=arr_660[i_660];
            res_660=i_660;

        }
         printf("%d\t",mr_660);
    }
    return 0;
}
