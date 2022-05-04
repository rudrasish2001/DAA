#include<stdio.h>
#include<time.h>

int i,j;
void algorithm1_649(int a)
{
	if(a<1)
	{
		printf("It is not a Prime Number\n");
	}
	for(i=1; i*i<=a;i++)
	{
		if(a%i == 0)
		{
			printf("It is Not a Prime Number");
			return;
		}
	}
	printf("It is a Prime Number");
}

void algorithm2_649(int a)
{

    if(a<=1){
        printf("I is not a Prime number\n");
        return ;
    }

    for(i = 2 ; i<a ; i++)
	{
        if(a%i == 0)
		{
            printf("It is not a Prime Number\n");
            return ;
        }
    }
    printf("it is a Prime Number\n");
}
void algorithm3_649(int a)
{
    if(a<=1){
        printf("It is not a Prime Number\n");
        return ;
    }

    int third = a;

    a = a + 1000;

    int nums[a+1];

    for(i = 0 ; i<=a ; i++)nums[i] = 0;

    for(i = 2 ; i<=a ; i++){
        if(nums[i] == 0){
            for(j = i*i ; j<=a ; j+=i){
                nums[i] = 1;
            }
        }
    }

    if(nums[third] == 1){
        printf("It si not a Prime Number\n");
    }
    else printf("Is a Prime Pumber\n");
}

int main()

{

    int n;
    scanf("%d",&n);

    clock_t t;
    t = clock();
    algorithm1_649(n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("algorithm1_649 took %f seconds to execute \n", time_taken);

    t = clock();
    algorithm2_649(n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("algorithm2_649 took %f seconds to execute \n", time_taken);
    
    t = clock();
    algorithm3_649(n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("algorithm3_649 took %f seconds to execute \n", time_taken);


    return 0;
}
