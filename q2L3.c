#include<stdio.h>

int sqrt_649(int n){

    if(n == 0 | n == 1){
        return n;
    }
    
    int ans = 0;

    int l = 1 , r = n;
    while(l<=r){

        int mid = (l + r)/2;

        if(mid * mid == n)
		return mid;

        if(mid * mid <=n){
            ans = mid;
            l = mid + 1;
        }   
        else r = mid - 1;
    }
    return ans;
}

int main(){
    int n_649;
    printf("Enter the number:");
    scanf("%d",&n_649);
    printf("The Square root is:%d",sqrt_649(n_649));
    return 0;
}
