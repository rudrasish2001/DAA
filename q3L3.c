#include<stdio.h>


void count_freq(int n , int nums[n]){

    int x = -1;

    int step1 = 0 , step2 = 0;
    int i,j;

    for(i = 0 ; i<n ; i++){
        int count = 0;
        step1++;
        for(j = 0 ; j<n ; j++)
		{
            if(nums[j] == nums[i])count++;
            if(count>=(n/2))
			{
                x = nums[i];
            }
            step2++;
        }
    }

    if(step1 + step2 == n * n + n){
        printf("O(n^2) time complexity\n");
    }

    if(x == -1)printf("no\n");
    else printf("yes -> %d\n",x);
}

void count_freq1(int n , int nums[n]){

    int count = 0;
    int x = -1;

    int step = 0,i;

    for(i = 0 ; i<n ; i++){
        if(count == 0){
            x = nums[i];
        }
        count += (nums[i] == x) ? 1 : -1;
        step++;
    }

    if(step == n){
        printf("O(n) time complexity\n");
    }

    count = 0;

    for(i = 0 ; i<n ; i++){
        if(nums[i] == x)count++;
    }

    if(count>=(n/2)){
        printf("yes\n");
    }
    else printf("no\n");
}   

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int nums[n],i;

    for(i = 0 ; i<n ; i++)
	{   
	    printf("Enter the values:");
        scanf("%d",&nums[i]);
    }

    count_freq(n,nums);
    count_freq1(n,nums);

    return 0;
}
