#include<stdio.h>
#include<time.h>

int binary_search(int n , int nums[n] , int x , int l, int r){
    if(l>r)return -1;

    int mid = (l + r)/2;

    if(nums[mid] == x)return mid;   

    if(nums[mid] > x)return binary_search(n,nums,x,l,mid-1);
    else if(nums[mid] < x)return binary_search(n,nums,x,mid+1,r);

    return -1;
}

int main(){
    int n; 
    printf("enter n\n");
    scanf("%d",&n);

    int nums[n];
int i;
printf("enter array elements\n");
    for( i = 0 ; i<n ; i++)
	{
    	
        scanf("%d",&nums[i]);
    }

    int x;
printf("enter element to be searched\n");
    scanf("%d",&x);

    clock_t t = clock();
    int idx = binary_search(n,nums,x,0,n-1);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("binary search took %f seconds to execute \n", time_taken);

    if(idx == -1){
        printf("element not found\n");
    }
    else{
        printf("element found at index %d\n",idx);
    }

    return 0;
}
