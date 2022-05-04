#include<stdio.h>
#include<time.h>

void insertion_sort(int n , int nums[n]){

    int step1 = 0 , step2 = 0 , step3 = 0 , step4 = 0;
    int i;

    for(i = 1 ; i<n ; i++){
        int key = nums[i];
        step1++;
        int j = i - 1;
        step2++;
        while(j>=0 && nums[j] > key){
            nums[j+1] = nums[j];
            j--;
            step3++;
        }
        nums[j+1] = key;
        step4++;
    }
    printf("according to step count method , total steps are %d\n",step1+step2+step3+step4);
}

int main(){

    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int nums[n];

    for(i = 0 ; i<n ; i++){
        scanf("%d",&nums[i]);
    }

    clock_t t = clock();
    insertion_sort(n,nums);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("insertion sort took %f seconds to execute \n", time_taken);

    printf("array after sorting: \n");
    for(i = 0 ; i< n; i++)printf("%d ",nums[i]);

    return 0;
}
